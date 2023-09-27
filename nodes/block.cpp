#include "block.h"
#include <list>
#include <algorithm>

Block::Block(list<Node*> code) : m_code(code)
{
	
}

Block::Block(): Block(list<Node*>())
{
	
}

Node* Block::interpret(Context context)
{
	return nullptr;
}

Block::~Block()
{
    auto destroy = [](Node* node) { delete node; };
    std::for_each(m_code.begin(), m_code.end(), destroy);
}
