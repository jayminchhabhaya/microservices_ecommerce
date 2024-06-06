#include "Order.h"

Order::Order(const std::string& orderId, const std::string& productId, const std::string& userId)
    : orderId(orderId), productId(productId), userId(userId) {}

std::string Order::getOrderId() const {
    return orderId;
}

std::string Order::getProductId() const {
    return productId;
}

std::string Order::getUserId() const {
    return userId;
}
