#include <string>
#include "context.h"

using namespace std;


class Interpreter {
private:
	Context m_globalContext;
public:
	Interpreter(const Context globalContext);
	Interpreter();
	void compile(const string code);
};