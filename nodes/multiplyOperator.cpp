#include "multiplyOperator.h"

MultiplyOperator::MultiplyOperator(Node* left, Node* right) : Operator(left, right)
{

}

Node* MultiplyOperator::interpret(Context context)
{
	return nullptr;
}

MultiplyOperator::~MultiplyOperator()
{
}
