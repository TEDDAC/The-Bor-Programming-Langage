#include "addOperator.h"

AddOperator::AddOperator(shared_ptr<Node> left, shared_ptr<Node> right) : Operator(left, right)
{

}

shared_ptr<Node> AddOperator::interpret(Context context)
{
	return nullptr;
}

AddOperator::~AddOperator()
{
}
