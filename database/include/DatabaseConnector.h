#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <sqlite3.h>
#include <string>
#include <vector>

class DatabaseConnector {
private:
    sqlite3* db;

public:
    DatabaseConnector(const std::string& dbName);
    ~DatabaseConnector();

    bool executeQuery(const std::string& query);
    std::vector<std::vector<std::string>> executeSelectQuery(const std::string& query);
};

#endif // DATABASECONNECTOR_H
