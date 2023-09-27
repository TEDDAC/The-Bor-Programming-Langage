#pragma once

#include "node.h"
#include "operators.h"

class MultiplyOperator : public Operator {
public:
	MultiplyOperator(shared_ptr<Node> left, shared_ptr<Node> right);
	shared_ptr<Node> interpret(Context context) override;
	~MultiplyOperator();
};