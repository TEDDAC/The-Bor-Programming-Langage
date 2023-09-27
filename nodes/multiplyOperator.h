#pragma once

#include "node.h"
#include "operators.h"

class MultiplyOperator : public Operator {
public:
	MultiplyOperator(Node* left, Node* right);
	Node* interpret(Context context) override;
	~MultiplyOperator();
};