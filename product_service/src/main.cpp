#include "ProductService.h"

int main() {
    ProductService productService;

    // Example product
    Product laptop("1", "Laptop", 999.99);

    // Add product
    productService.addProduct(laptop);

    // Get product by ID
    Product retrievedProduct = productService.getProduct("1");

    // Update product
    Product updatedLaptop("1", "Updated Laptop", 1099.99);
    productService.updateProduct("1", updatedLaptop);

    // Delete product
    productService.deleteProduct("1");

    return 0;
}
