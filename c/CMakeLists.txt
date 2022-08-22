
add_library(c_objs_1 OBJECT c.cxx)
target_compile_definitions(c_objs_1 PRIVATE MODE=1)

add_library(c_objs_2 STATIC c.cxx)
target_compile_definitions(c_objs_2 PRIVATE MODE=2)

add_executable(c_exec c.cxx)
target_link_libraries(c_exec
  PRIVATE $<TARGET_OBJECTS:c_objs_1>
          $<TARGET_OBJECTS:c_objs_2>)
