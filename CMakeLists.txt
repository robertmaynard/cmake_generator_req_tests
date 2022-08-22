cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(bazel-reqs)

# static + shared => executable
add_subdirectory(a)

# debug post-fix
# language override of suffix
add_subdirectory(b)

# object files
add_subdirectory(c)

# configure files
add_subdirectory(d)

# per souce file flags
add_subdirectory(e)

# find_package demo
add_subdirectory(f)

# output name != target name
add_subdirectory(g)

# # PCH test
# add_subdirectory(h)

# # custom command
# add_subdirectory(i)

# # dep fire walls
# add_subdirectory(j)
