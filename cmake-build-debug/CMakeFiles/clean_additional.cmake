# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "src\\CMakeFiles\\task4_cpp_autogen.dir\\AutogenUsed.txt"
  "src\\CMakeFiles\\task4_cpp_autogen.dir\\ParseCache.txt"
  "src\\task4_cpp_autogen"
  )
endif()
