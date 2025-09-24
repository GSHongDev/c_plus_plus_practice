#include "Function.h"
using std::cout;
using std::endl;
namespace FunctionOverloading
{
	int Add(int a, int b)
	{
		return a + b;
	}

	double Add(double a, double b)
	{
		return a + b;
	}

}
// 5.Function Overloading - test entry in namespace
namespace FunctionOverloading
{
	void TestFunctionOverloading()
	{
		cout << "5.Function Overloading" << endl;
		cout << Add(1, 2) << endl;
		cout << Add(1.1, 2.2) << endl;

		printf("\n");
	}
}


// 6.Reference - test entry in namespace
namespace Reference
{
	//1. Reference is an alias for another variable
	//2. Reference must be initialized when it is declared（引用必须初始化）
	//3. Reference cannot be null
	//4. Reference cannot be changed to refer to another variable（引用不能改变指向）
	//5. Reference is not a variable, it does not have its own memory address
	//6. Reference is often used to pass arguments to functions
	//7. One variable can have multiple references（一个变量可以有多个引用，多个别名）


	void TestReference()
	{
		cout << "6.Reference" << endl;
		int a = 10;
		int& ref = a; // ref is a reference to a
		cout << "a = " << a << endl;
		cout << "&a = " << &a << endl;

		cout << "ref = " << ref << endl;
		cout << "&ref = " << &ref << endl;

		a++;
		cout << "a = " << a << endl;

		ref++;
		cout << "a = " << ref << endl;

		int& ref2 = ref; // ref2 is another reference to a
		cout << "a = " << ref2 << endl;
	}
}

