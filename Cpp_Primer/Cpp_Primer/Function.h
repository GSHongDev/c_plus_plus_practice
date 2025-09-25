#pragma once
#include <iostream>
#include <assert.h>
using std::cout;
using std::endl;

namespace FunctionOverloading
{
	int Add(int a, int b);
	double Add(double a, double b);
    
	// test entry for function overloading
    void TestFunctionOverloading();
}

namespace Reference
{
	void TestReference();
}