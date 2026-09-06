# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Clock_v1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Clock_v1_autogen.dir/ParseCache.txt"
  "Clock_v1_autogen"
  )
endif()
