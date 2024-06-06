#ifndef PRODUCTSERVICE_H
#define PRODUCTSERVICE_H

#include "Product.h"
#include <unordered_map>
#include <mutex>

class ProductService {
private:
    std::unordered_map<std::string, Product> products;
    std::mutex mutex;

public:
    ProductService();

    void addProduct(const Product& product);
    Product getProduct(const std::string& id);
    void updateProduct(const std::string& id, const Product& product);
    void deleteProduct(const std::string& id);
};

#endif // PRODUCTSERVICE_H
