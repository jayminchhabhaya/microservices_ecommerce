#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
private:
    std::string orderId;
    std::string productId;
    std::string userId;
    // Add other order-related fields as needed

public:
    Order(const std::string& orderId, const std::string& productId, const std::string& userId);

    std::string getOrderId() const;
    std::string getProductId() const;
    std::string getUserId() const;
    // Add getters for other fields
};

#endif // ORDER_H
