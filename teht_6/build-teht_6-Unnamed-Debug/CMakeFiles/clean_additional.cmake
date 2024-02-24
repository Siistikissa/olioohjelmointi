# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\teht_6_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\teht_6_autogen.dir\\ParseCache.txt"
  "teht_6_autogen"
  )
endif()
