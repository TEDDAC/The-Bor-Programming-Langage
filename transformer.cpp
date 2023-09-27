#include "transformer.h"
#include <iostream>
#include <string>
#include "nodes/block.h"

using namespace std;

Node* Transformer::transform(TSNode& tsnode) {
	if(!ts_node_is_null(tsnode)){
		string nodeType = ts_node_type(tsnode);
		if (nodeType == string("program")) {
			Node *node = new Block();
			for (int i = 0; i < ts_node_child_count(tsnode); i++) {
				TSNode child = ts_node_child(tsnode, i);
				Transformer::transform(child);
			}
			return node;
		}
	}
	return NULL;
}