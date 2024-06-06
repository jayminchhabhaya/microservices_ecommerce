#include "ProductService.h"

ProductService::ProductService() {}

void ProductService::addProduct(const Product& product) {
    std::lock_guard<std::mutex> lock(mutex);
    products[product.getId()] = product;
}

Product ProductService::getProduct(const std::string& id) {
    std::lock_guard<std::mutex> lock(mutex);
    return products[id];
}

void ProductService::updateProduct(const std::string& id, const Product& product) {
    std::lock_guard<std::mutex> lock(mutex);
    products[id] = product;
}

void ProductService::deleteProduct(const std::string& id) {
    std::lock_guard<std::mutex> lock(mutex);
    products.erase(id);
}
