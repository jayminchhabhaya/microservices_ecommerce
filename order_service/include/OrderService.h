#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H

#include "Order.h"
#include <unordered_map>
#include <mutex>

class OrderService {
private:
    std::unordered_map<std::string, Order> orders;
    std::mutex mutex;

public:
    OrderService();

    void createOrder(const Order& order);
    Order getOrder(const std::string& orderId);
    void updateOrder(const std::string& orderId, const Order& order);
    void deleteOrder(const std::string& orderId);
};

#endif // ORDERSERVICE_H
