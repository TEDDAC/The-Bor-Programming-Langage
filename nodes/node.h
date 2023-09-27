#pragma once

#include "context.h"

struct Node {
	virtual Node* interpret(Context context) = 0;
};