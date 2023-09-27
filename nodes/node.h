#pragma once

#include "context.h"
#include <memory>

struct Node {
	virtual std::shared_ptr<Node> interpret(Context context) = 0;
};