#pragma once

#include "node.h"
#include <list>

using namespace std;

class Block : public Node {
private:
	list<Node*> m_code;
public:
	Block(list<Node*> code);
	Block();
	Node* interpret(Context context) override;
	~Block();
};