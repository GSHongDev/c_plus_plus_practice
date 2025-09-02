#include <iostream>
#include "Test.h"

using namespace std;

//20250901 C++ Primer
// 1.流控制运算符
void Function01()
{
	// <<
	// flow control operator
	// 1.C语言中 左移运算符
	// 2.C++语言中 流插入运算符 自动识别类型
	
	// c means console.
	// out means output.
	// cout means console output.

	cout << "Hello World" << endl;
	cout << "Hello " << "World" << endl;

	int i = 1;
	i = i << 1; // 左移运算符


	cout << "i = " << i << endl;
}

void Function02()
{
	// >>
	// flow control operator
	// 1.C语言中 右移运算符
	// 2.C++语言中 流提取运算符
	int i = 2;
	i = i >> 1; // 右移运算符
	cout << "i = " << i << endl;
	int j;
	cout << "Please input an integer: " << endl;
	cin >> j; // 流提取运算符
	cout << "j = " << j << endl;
}

///////////////////////////////////////////////////////////////////

// 2.缺省参数
namespace Test02
{
	// 全缺省参数
	void Function01(int a = 10, int b = 20, int c = 30)
	{
		cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	}

	// 半缺省参数

	void Function02(int a, int b = 20 , int c = 30)
	{
		cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	}

	void Test()
	{
		cout << "Function01" << endl;
		Function01();
		Function01(100);
		Function01(100, 200);
		Function01(100, 200, 300);

		printf("\n");

		cout << "Function02" << endl;
		// Function02(); // error
		Function02(100);
		Function02(100, 200);
		Function02(100, 200, 300);
	}

// 注意事项
// 1.缺省参数只能从右向左依次设置
// 2.函数声明和函数定义中只能有一个出现缺省参数
// 在函数声明中出现缺省参数，函数定义中不能出现缺省参数
// 缺省参数只能在函数声明中出现

//预处理 -> 编译 -> 汇编 -> 链接
//预处理阶段：	展开头文件，宏替换，条件编译，删除注释
//编译阶段：		语法检查，生成汇编代码
//汇编阶段：		生成目标文件
//链接阶段：		连接目标文件，生成可执行文件
}

// 3.函数重载

namespace Test03
{
	// 参数的个数不同
	void Function(int a)
	{
		cout << "Function(int a)" << endl;
	}

	// 参数的类型不同
	void Function(double a)
	{
		cout << "Function(double a)" << endl;
	}
	// 参数的顺序不同（本质上还是类型不同）
	void Function(int a, int b)
	{
		cout << "Function(int a, int b)" << endl;
	}
	void Function(double a, int b)
	{
		cout << "Function(double a, int b)" << endl;
	}

	void Test()
	{
		Function(10); // Function(int a)
		Function(10.5); // Function(double a)
		Function(10, 20); // Function(int a, int b)
		Function(10.5, 20); // Function(double a, int b)
	}
}


int main()
{
	Test03::Test();
	return 0;
}