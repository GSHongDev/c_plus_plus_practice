#include <iostream>

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
	void Function01(int a = 10, int b = 20, int c = 30)
	{
		cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	}
}

int main()
{
	Test02::Function01();
	Test02::Function01(100);
	Test02::Function01(100, 200);
	Test02::Function01(100, 200, 300);
	return 0;
}