# CMakeList.txt : projet CMake pour Bor Interpreter, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

# Activez Rechargement à chaud pour les compilateurs MSVC si cela est pris en charge.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Bor Interpreter")

# Ajoutez une source à l'exécutable de ce projet.

add_executable (bor)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

target_link_libraries(bor "treeSitter")

target_sources(bor PUBLIC
	"parser.c"
	"bor.cpp"
	"transformer.cpp"
	"nodes/node.cpp" 
	"context.cpp" 
	"interpreter.cpp"
	"nodes/block.cpp" 
	"nodes/operators.cpp" 
	"nodes/addOperator.cpp"
	"nodes/subOperator.cpp" 
	"nodes/divideOperator.cpp" 
	"nodes/multiplyOperator.cpp")

add_subdirectory(tree_sitter)

target_include_directories (bor PUBLIC "${CMAKE_SOURCE_DIR}/tree_sitter/")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET bor PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
