#include "multiplyOperator.h"

MultiplyOperator::MultiplyOperator(shared_ptr<Node> left, shared_ptr<Node> right) : Operator(left, right)
{

}

shared_ptr<Node> MultiplyOperator::interpret(Context context)
{
	return nullptr;
}

MultiplyOperator::~MultiplyOperator()
{
}
