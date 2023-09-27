#pragma once

#include "node.h"
#include "operators.h"

class SubOperator : public Operator {
public:
	SubOperator(Node* left, Node* right);
	Node* interpret(Context context) override;
	~SubOperator();
};