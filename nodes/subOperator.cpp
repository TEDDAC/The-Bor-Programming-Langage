#include "subOperator.h"

SubOperator::SubOperator(shared_ptr<Node> left, shared_ptr<Node> right) : Operator(left, right)
{

}

shared_ptr<Node> SubOperator::interpret(Context context)
{
	return nullptr;
}

SubOperator::~SubOperator()
{
}
