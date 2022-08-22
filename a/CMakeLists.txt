
add_library(a_static STATIC static.cpp)
set_target_properties(a_static PROPERTIES
  POSITION_INDEPENDENT_CODE ON)

add_library(a_shared SHARED shared.cpp)
target_link_libraries(a_shared PRIVATE a_static)

add_executable(a_exec main.cpp)
target_link_libraries(a_exec PRIVATE a_shared)
set_target_properties(a_exec PROPERTIES
   POSITION_INDEPENDENT_CODE ON)
