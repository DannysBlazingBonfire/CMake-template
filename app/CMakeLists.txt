add_executable(main src/main.cpp)

target_link_libraries(main PRIVATE Printer)
target_link_libraries(main PRIVATE Hex_decoder)

# Command to copy the generated .DLL files into the executable dir post compilation.
add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_RUNTIME_DLLS:main>
        $<TARGET_FILE_DIR:main>
    COMMAND_EXPAND_LISTS
)
