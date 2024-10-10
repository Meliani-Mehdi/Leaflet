# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Leaflet_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Leaflet_autogen.dir\\ParseCache.txt"
  "Leaflet_autogen"
  )
endif()
