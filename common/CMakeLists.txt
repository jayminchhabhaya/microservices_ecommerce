cmake_minimum_required(VERSION 3.10)
project(Common)

# No need to set C++ standard as it's header-only

# Create a library target for Common Utilities
add_library(Common INTERFACE)

# Include directories
target_include_directories(Common INTERFACE include/)
