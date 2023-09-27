#pragma once

#include "node.h"
#include "operators.h"

class AddOperator : public Operator {
public:
	AddOperator(shared_ptr<Node> left, shared_ptr<Node> right);
	shared_ptr<Node> interpret(Context context) override;
	~AddOperator();
};