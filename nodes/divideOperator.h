#pragma once

#include "node.h"
#include "operators.h"

class DivideOperator : public Operator {
public:
	DivideOperator(shared_ptr<Node> left, shared_ptr<Node> right);
	shared_ptr<Node> interpret(Context context) override;
	~DivideOperator();
};