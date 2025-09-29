#include "Function.h"

void Date::Init(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

void Date::Show()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}