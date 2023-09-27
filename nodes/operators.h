#pragma once

#include "node.h"
#include <memory>

using namespace std;

struct Operator : public Node {
private:
	shared_ptr<Node> m_left;
	shared_ptr<Node> m_right;
public:
	Operator(shared_ptr<Node> left, shared_ptr<Node> right);
	~Operator();
};