file(GLOB SRC_FILE ${CMAKE_SOURCE_DIR}/*.c)
add_library(treeSitter ${SRC_FILE})
target_include_directories(treeSitter INTERFACE "${CMAKE_SOURCE_DIR}")
target_include_directories(treeSitter INTERFACE "${CMAKE_SOURCE_DIR}/src")