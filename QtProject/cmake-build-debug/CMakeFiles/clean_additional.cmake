# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/IndianRestaraunts_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/IndianRestaraunts_autogen.dir/ParseCache.txt"
  "IndianRestaraunts_autogen"
  )
endif()
