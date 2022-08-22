

add_executable(h_exec main.cpp)
target_precompile_headers(h_exec
  PUBLIC
    pch_input.h
  PRIVATE
    [[<unordered_map>]]
    [[<vector>]]
)