#pragma once

#include "node.h"
#include "operators.h"

class DivideOperator : public Operator {
public:
	DivideOperator(Node* left, Node* right);
	Node* interpret(Context context) override;
	~DivideOperator();
};