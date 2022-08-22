

configure_file(d.cpp.in ${CMAKE_CURRENT_BINARY_DIR}/d.cpp)
add_executable(d_exec ${CMAKE_CURRENT_BINARY_DIR}/d.cpp)
