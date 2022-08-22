

add_executable(e_exec e.cpp not_e.cpp)
set_source_files_properties(e.cpp
  PROPERTIES
  COMPILE_DEFINITIONS "IS_E"
  COMPILE_OPTIONS "-std=c++11" #just a flag that has an easily observable c++ side-effect
  )
set_source_files_properties(not_e.cpp
  PROPERTIES
  COMPILE_DEFINITIONS "IS_NOT_E"
  COMPILE_OPTIONS "-std=c++03" #just a flag that has an easily observable c++ side-effect
  )
