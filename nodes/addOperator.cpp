#include "addOperator.h"

AddOperator::AddOperator(Node* left, Node* right) : Operator(left, right)
{

}

Node* AddOperator::interpret(Context context)
{
	return nullptr;
}

AddOperator::~AddOperator()
{
}
