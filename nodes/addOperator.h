#pragma once

#include "node.h"
#include "operators.h"

class AddOperator : public Operator {
public:
	AddOperator(Node* left, Node* right);
	Node* interpret(Context context) override;
	~AddOperator();
};