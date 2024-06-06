# Microservices Ecommerce

This project implements a microservices-based system for a simple e-commerce application. It consists of three microservices: Authentication Service, Product Service, and Order Service.

## Microservices Architecture
- **Authentication Service**: Handles user authentication.
- **Product Service**: Manages product information.
- **Order Service**: Manages order processing.

## Concurrency Control
- Implemented concurrency control mechanisms in ProductService to ensure data integrity.

## Clustering and High Availability
- Not implemented in this basic example but can be achieved using container orchestration tools like Kubernetes.

## Database Integration
- Utilizes SQLite for storing user information, product data, and order history.

## Common Utilities
- Contains common constants and utilities used across microservices.

## Directory Structure

microservices_ecommerce/
│
├── authentication_service/
│ ├── src/
│ ├── include/
│ └── CMakeLists.txt
│
├── product_service/
│ ├── src/
│ ├── include/
│ └── CMakeLists.txt
│
├── order_service/
│ ├── src/
│ ├── include/
│ └── CMakeLists.txt
│
├── database/
│ ├── include/
│ └── CMakeLists.txt
│
├── common/
│ ├── include/
│ └── CMakeLists.txt
│
├── CMakeLists.txt
└── README.md


## Instructions
1. Each microservice has its own directory containing source files and a CMakeLists.txt file for building.
2. Adjust the paths and add more source files as needed.
3. Build the project using CMake.

