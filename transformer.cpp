#include "transformer.h"
#include <iostream>
#include <string>
#include "nodes/block.h"
#include <list>
#include "nodes/SubOperator.h"
#include "nodes/divideOperator.h"
#include "nodes/addOperator.h"
#include "nodes/multiplyOperator.h"

using namespace std;

Node* Transformer::transform(TSNode& tsnode) {
	if(!ts_node_is_null(tsnode)){
		string nodeType = ts_node_type(tsnode);
		if (nodeType == string("binary_expression")) {
			return createBinaryExpressionNode(tsnode);
		} else if (nodeType == string("program")) {
			return createBlockNode(tsnode);
		}
	}
	return nullptr;
}

Node* Transformer::createBinaryExpressionNode(TSNode& tsnode) {
	TSNode leftTSNode = ts_node_child_by_field_name(tsnode, "left", 5);
	Node* left = transform(leftTSNode);
	TSNode rightTSNode = ts_node_child_by_field_name(tsnode, "left", 5);
	Node* right = transform(rightTSNode);
	string op = ts_node_type(ts_node_child(tsnode, 1));
	if (op == string("+"))
		return new AddOperator(left, right);
	else if (op == string("-"))
		return new SubOperator(left, right);
	else if (op == string("/"))
		return new DivideOperator(left, right);
	else if (op == string("*"))
		return new MultiplyOperator(left, right);
}

Node* Transformer::createBlockNode(TSNode& tsnode) {
	list<Node*> code;
	for (int i = 0; i < ts_node_child_count(tsnode); i++) {
		TSNode child = ts_node_child(tsnode, i);
		code.push_back(transform(child));
	}
	return new Block(code);
}