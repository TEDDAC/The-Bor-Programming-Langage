// Bor Interpreter.cpp : définit le point d'entrée de l'application.
//

#include "bor.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "tree_sitter/api.h"
#include "tree_sitter/parser.h"
#include "transformer.h"
#include "interpreter.h"

using namespace std;

int main()
{
	Interpreter interpreter;

	interpreter.compile("2 + a");

	return 0;
}
