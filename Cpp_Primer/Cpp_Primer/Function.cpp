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

	//usage of reference
	//1. Reference as function parameter (output)
	//2. If object is large, pass by reference to avoid copying, then save memory and time
	//3. Pointer can do the same thing(1.; 2.), but reference is easier to use

	//4. Reference as function return value

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

	//4. Reference as function return value

	int func() //return by value
	{
		int x = 10;
		return x;
	}

	int& func2() //return by reference
	{
		int x = 10;
		return x; // Warning: returning reference to local variable
	}

	int& func3()
	{
		int y = 20;
		return y; // Warning: returning reference to local variable
	}
	// draw a conclusion: cannot return reference to local variable
	// 返回变量出了函数作用域就被销毁了，引用就变成了悬空引用
	// 只能返回引用全局变量，静态变量，或者函数外部传入的变量(出函数作用域，不销毁的区块下可以使用引用返回)

	// 临时变量具有常性


	// pointer vs. reference
	// 1.引用是别名，不开空间；指针是变量，开空间（语法上来说）
	// 备注：引用底层是用指针实现的；语法含义和底层实现是背离的，就像鱼香肉丝一样
	// 2.引用必须初始化，指针可以不初始化
	// 3.引用不能改变指向，指针可以改变指向
	// 4.引用不能为null，指针可以为null
	// （指针和引用，二者相辅相成）
	// 5.引用相对更安全，指针相对不安全（容易出现野指针，但是不容易出现野引用）
	// 汇编（底层）层面上，没有引用，都是指针，引用编译后也转换成指针了。
	void PointerVsReference()
	{
		int a = 10;
		int& ra = a; // reference 语法上不开空间
		ra = 20;

		int* pa = &a; // pointer 语法上开空间
		*pa = 20;
	}

}

