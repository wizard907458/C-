#include<iostream>

class Date
{
public:
	Date()
	{
		_year = 1;
		_month = 2;
		_day = 3;
	}

	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//Date(int year = 1, int month = 2, int day = 3)//重载和第一个
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}

	void Print()
	{
		std::cout << _year << "/" << _month << "/" << _day << std::endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	Date d2(2026, 6, 27);

	//Date d3();//是函数声明

	d1.Print();
	d2.Print();



	return 0;
}