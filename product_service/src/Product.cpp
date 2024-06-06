#include "Product.h"

Product::Product(const std::string& id, const std::string& name, float price)
    : id(id), name(name), price(price) {}

std::string Product::getId() const {
    return id;
}

std::string Product::getName() const {
    return name;
}

float Product::getPrice() const {
    return price;
}
