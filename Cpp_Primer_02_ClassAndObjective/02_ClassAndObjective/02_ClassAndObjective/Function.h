#pragma once
#include <iostream>
using std::cout;
using std::endl;

class Date
{
private:
	int _year;
	int _month;
	int _day;

public:
	void Init(int year, int month, int day);
	void Show();
};