#include "Test.h"
#include "Function.h"
using std::cout;
using std::endl;

// 5.Function Overloading


int main()
{	
	//cout << "Hello World" << endl;
	
	// 5.Function Overloading
	cout << FunctionOverloading::Add(1, 2) << endl;       // Calls int version
	cout << FunctionOverloading::Add(1.5, 2.5) << endl;   // Calls double version

	return 0;
}