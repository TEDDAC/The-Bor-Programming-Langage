#include "block.h"
#include <list>
#include <algorithm>

Block::Block(list<shared_ptr<Node>> code) : m_code(code)
{
	
}

Block::Block(): Block(list<shared_ptr<Node>>())
{
	
}

shared_ptr<Node> Block::interpret(Context context)
{
	return nullptr;
}

Block::~Block()
{
    
}
