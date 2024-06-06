#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string id;
    std::string name;
    float price;

public:
    Product(const std::string& id, const std::string& name, float price);

    std::string getId() const;
    std::string getName() const;
    float getPrice() const;
};

#endif // PRODUCT_H
