#include "divideOperator.h"

DivideOperator::DivideOperator(shared_ptr<Node> left, shared_ptr<Node> right) : Operator(left, right)
{

}

shared_ptr<Node> DivideOperator::interpret(Context context)
{
	return nullptr;
}

DivideOperator::~DivideOperator()
{
}
