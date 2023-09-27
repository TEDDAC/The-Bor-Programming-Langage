#include "interpreter.h"
#include <string>
#include "transformer.h"
#include "parser.h"

extern "C" TSLanguage * tree_sitter_bor(void);

Interpreter::Interpreter(const Context globalContext) : m_globalContext(globalContext), m_rootNode(nullptr){

}

Interpreter::Interpreter() : Interpreter(Context()) {

}

void Interpreter::compile(const string code) {
	TSParser* parser = ts_parser_new();

	ts_parser_set_language(parser, tree_sitter_bor());

	// Build a syntax tree based on source code stored in a string.
	const char* source_code = code.c_str();
	TSTree* tree = ts_parser_parse_string(
		parser,
		NULL,
		source_code,
		strlen(source_code)
	);

	// Get the root node of the syntax tree.
	TSNode root_node = ts_tree_root_node(tree);

	// Print the syntax tree as an S-expression.
	char* string = ts_node_string(root_node);
	printf("Syntax tree: %s\n", string);

	this->m_rootNode = Transformer::transform(root_node);

	// Free all of the heap-allocated memory.
	free(string);
	ts_tree_delete(tree);
	ts_parser_delete(parser);

	return;
}

Interpreter::~Interpreter()
{
	
}
