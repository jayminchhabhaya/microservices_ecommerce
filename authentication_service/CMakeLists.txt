cmake_minimum_required(VERSION 3.10)
project(AuthenticationService)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add source files
set(SOURCES src/User.cpp src/AuthenticationService.cpp src/main.cpp)

# Add executable
add_executable(auth_service ${SOURCES})
