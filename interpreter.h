#pragma once

#include <string>
#include "context.h"
#include "nodes/node.h"

using namespace std;


class Interpreter {
private:
	Context m_globalContext;
	Node* m_rootNode;
public:
	Interpreter(const Context globalContext);
	Interpreter();
	void compile(const string code);
	~Interpreter();
};