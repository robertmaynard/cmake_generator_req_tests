
add_executable(b_exec b.CC b.c)
set_source_files_properties(b.CC PROPERTIES LANGUAGE CXX)
set_target_properties(b_exec PROPERTIES LINKER_LANGUAGE C)
