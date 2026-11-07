add_library(Hex_decoder SHARED src/decoder.cpp)
target_include_directories(Hex_decoder INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/includes)
