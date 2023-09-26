// Bor Interpreter.cpp : définit le point d'entrée de l'application.
//

#include "bor.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "tree_sitter/api.h"
#include "tree_sitter/parser.h"

using namespace std;

TSLanguage * tree_sitter_bor(void);

int main()
{
	TSParser* parser = ts_parser_new();
	
	ts_parser_set_language(parser, tree_sitter_bor());

	// Build a syntax tree based on source code stored in a string.
	const char* source_code = "a + 2";
	TSTree* tree = ts_parser_parse_string(
		parser,
		NULL,
		source_code,
		strlen(source_code)
	);

	// Get the root node of the syntax tree.
	TSNode root_node = ts_tree_root_node(tree);

	// Get some child nodes.
	TSNode array_node = ts_node_named_child(root_node, 0);
	TSNode number_node = ts_node_named_child(array_node, 0);

	return 0;
}
