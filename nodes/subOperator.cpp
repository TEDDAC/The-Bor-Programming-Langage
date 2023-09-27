#include "subOperator.h"

SubOperator::SubOperator(Node* left, Node* right) : Operator(left, right)
{

}

Node* SubOperator::interpret(Context context)
{
	return nullptr;
}

SubOperator::~SubOperator()
{
}
