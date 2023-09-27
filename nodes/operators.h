#pragma once

#include "node.h"

struct Operator : public Node {
private:
	Node* m_left;
	Node* m_right;
public:
	Operator(Node* left, Node* right);
	~Operator();
};