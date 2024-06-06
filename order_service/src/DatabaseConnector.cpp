#include "DatabaseConnector.h"

DatabaseConnector::DatabaseConnector(const std::string& dbName) {
    int rc = sqlite3_open(dbName.c_str(), &db);
    if (rc) {
        // Handle error
    }
}

DatabaseConnector::~DatabaseConnector() {
    sqlite3_close(db);
}

bool DatabaseConnector::executeQuery(const std::string& query) {
    char* errorMsg;
    int rc = sqlite3_exec(db, query.c_str(), NULL, 0, &errorMsg);
    if (rc != SQLITE_OK) {
        // Handle error
        sqlite3_free(errorMsg);
        return false;
    }
    return true;
}

std::vector<std::vector<std::string>> DatabaseConnector::executeSelectQuery(const std::string& query) {
    std::vector<std::vector<std::string>> result;

    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, query.c_str(), -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        // Handle error
        return result;
    }

    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        std::vector<std::string> row;
        int numColumns = sqlite3_column_count(stmt);
        for (int i = 0; i < numColumns; i++) {
            row.push_back(std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, i))));
        }
        result.push_back(row);
    }

    sqlite3_finalize(stmt);
    return result;
}
