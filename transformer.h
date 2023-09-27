#pragma once

#include "tree_sitter/api.h"
#include "nodes/node.h"
#include <memory>

class Transformer {
public:
	static std::shared_ptr<Node> transform(TSNode& tsnode);
	static std::shared_ptr<Node> createBinaryExpressionNode(TSNode& tsnode);
	static std::shared_ptr<Node> createBlockNode(TSNode& tsnode);
};