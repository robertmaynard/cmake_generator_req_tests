

find_package(ZLIB REQUIRED)
find_package(PNG REQUIRED)
find_package(Threads REQUIRED)

add_executable(f_exe f.C)
target_link_libraries(f_exe PRIVATE ZLIB::ZLIB PNG::PNG Threads::Threads)
