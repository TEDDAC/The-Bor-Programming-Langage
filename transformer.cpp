#include "transformer.h"
#include <iostream>

Node Transformer::transform(TSNode& tsnode) {
	if(!ts_node_is_null(tsnode)){
		std::cout << ts_node_type(tsnode) << std::endl;
		for (int i = 0; i < ts_node_child_count(tsnode); i++) {
			TSNode child = ts_node_child(tsnode, i);
			Transformer::transform(child);
		}
	}
	Node node;
	return node;
}