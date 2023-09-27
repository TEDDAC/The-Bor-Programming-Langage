#include "operators.h"

Operator::Operator(Node* left, Node* right) : m_left(left), m_right(right)
{

}

Operator::~Operator()
{
	delete m_left;
	delete m_right;
}
