

set(input [=[
int gen_func();
int main() {
  return gen_func();
}]=])

# placeholder for something like pybind but run at configure time
execute_process(COMMAND ${CMAKE_COMMAND} -E echo "${input}"
                OUTPUT_FILE ${CMAKE_CURRENT_BINARY_DIR}/main.cpp)


file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/temp_ignore_me"
    CONTENT [=[int gen_func() { return 0; }]=])

# placeholder for something like pybind where none of the dependency
# exist while CMake is parsing
add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/i_func.cpp
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different temp_ignore_me i_func.cpp
                   WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

add_executable(i_exe ${CMAKE_CURRENT_BINARY_DIR}/main.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/i_func.cpp)
