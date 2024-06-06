cmake_minimum_required(VERSION 3.10)
project(OrderService)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add source files
set(SOURCES 
    src/Order.cpp 
    src/OrderService.cpp 
    src/DatabaseConnector.cpp
    src/main.cpp)

# Add executable
add_executable(order_service ${SOURCES})

# Link SQLite library
target_link_libraries(order_service sqlite3)
