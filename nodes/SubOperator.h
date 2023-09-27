#pragma once

#include "node.h"
#include "operators.h"

class SubOperator : public Operator {
public:
	SubOperator(shared_ptr<Node> left, shared_ptr<Node> right);
	shared_ptr<Node> interpret(Context context) override;
	~SubOperator();
};