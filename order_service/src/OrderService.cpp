#include "OrderService.h"
#include "DatabaseConnector.h"

OrderService::OrderService() {
    db = new DatabaseConnector("orders.db");

    // Create orders table if not exists
    std::string createTableQuery = "CREATE TABLE IF NOT EXISTS orders ("
                                   "order_id TEXT PRIMARY KEY, "
                                   "product_id TEXT, "
                                   "user_id TEXT)";
    db->executeQuery(createTableQuery);
}

OrderService::~OrderService() {
    delete db;
}

void OrderService::createOrder(const Order& order) {
    std::string insertQuery = "INSERT INTO orders (order_id, product_id, user_id) "
                              "VALUES ('" + order.getOrderId() + "', '" + order.getProductId() + "', '" + order.getUserId() + "')";
    db->executeQuery(insertQuery);
}

Order OrderService::getOrder(const std::string& orderId) {
    std::string selectQuery = "SELECT * FROM orders WHERE order_id = '" + orderId + "'";
    std::vector<std::vector<std::string>> result = db->executeSelectQuery(selectQuery);
    if (!result.empty()) {
        return Order(result[0][0], result[0][1], result[0][2]);
    }
    // Handle error or return default Order
}

void OrderService::updateOrder(const std::string& orderId, const Order& order) {
    std::string updateQuery = "UPDATE orders SET product_id = '" + order.getProductId() + "', "
                              "user_id = '" + order.getUserId() + "' "
                              "WHERE order_id = '" + orderId + "'";
    db->executeQuery(updateQuery);
}

void OrderService::deleteOrder(const std::string& orderId) {
    std::string deleteQuery = "DELETE FROM orders WHERE order_id = '" + orderId + "'";
    db->executeQuery(deleteQuery);
}
