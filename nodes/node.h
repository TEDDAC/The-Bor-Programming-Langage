#pragma once

#include "context.h"

class Node {
	virtual Node* interpret(Context context) = 0;
};