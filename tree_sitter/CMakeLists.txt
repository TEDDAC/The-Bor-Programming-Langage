add_library(treeSitter
	src/lib.c
)
target_include_directories(treeSitter PUBLIC "tree_sitter" "${CMAKE_SOURCE_DIR}")