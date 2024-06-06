cmake_minimum_required(VERSION 3.10)
project(MicroservicesEcommerce)

set(CMAKE_CXX_STANDARD 11)

# Add subdirectories for each microservice
add_subdirectory(authentication_service)
add_subdirectory(product_service)
add_subdirectory(order_service)
add_subdirectory(database)
add_subdirectory(common)
