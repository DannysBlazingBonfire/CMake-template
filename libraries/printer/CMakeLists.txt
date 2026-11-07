add_library(Printer STATIC src/printer.cpp)
target_include_directories(Printer INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/includes)
