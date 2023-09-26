#include "tree_sitter/api.h"
#include "nodes/node.h"

class Transformer {
public:
	static Node transform(TSNode& node);
};