#include "operators.h"

Operator::Operator(shared_ptr<Node> left, shared_ptr<Node> right) : m_left(left), m_right(right)
{

}

Operator::~Operator()
{
	
}
