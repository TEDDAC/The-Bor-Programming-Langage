#pragma once

#include "node.h"
#include <list>

using namespace std;

class Block : public Node {
private:
	list<shared_ptr<Node>> m_code;
public:
	Block(list<shared_ptr<Node>> code);
	Block();
	shared_ptr<Node> interpret(Context context) override;
	~Block();
};