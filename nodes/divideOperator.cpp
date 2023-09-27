#include "divideOperator.h"

DivideOperator::DivideOperator(Node* left, Node* right) : Operator(left, right)
{

}

Node* DivideOperator::interpret(Context context)
{
	return nullptr;
}

DivideOperator::~DivideOperator()
{
}
