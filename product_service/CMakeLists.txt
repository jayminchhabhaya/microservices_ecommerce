cmake_minimum_required(VERSION 3.10)
project(ProductService)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add source files
set(SOURCES src/Product.cpp src/ProductService.cpp src/main.cpp)

# Add executable
add_executable(product_service ${SOURCES})
