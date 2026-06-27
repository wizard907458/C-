//#include<iostream>

//class Stack
//{
//public:
//	void Init(int n = 4);
//private:
//	int* array;
//	size_t capacity;
//	size_t top;
//};
//
//void Stack::Init(int n)//声明和定义分离，需要指定类域
//{
//	array = (int*)malloc(sizeof(int) * n);
//	if (array == nullptr)
//	{
//		perror("malloc申请空间失败");
//		return;
//	}
//	capacity = n;
//	top = 0;
//}
//
//int main()
//{
//	Stack st;
//	st.Init();
//
//	return 0;
//}


//类实例化
//class Date
//{
//	public:
//		void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		std::cout << _year << "/" << _month << "/" << _day << std::endl;
//	}
//
//private://这里只是声明，没有开空间
//	int _year;
//	int _month;
//	int _day;
//
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//
//	d1.Init(2026, 6, 27);
//	d1.Print();
//
//	d2.Init(2026, 6, 6);
//	d2.Print();
//
//	return 0;
//}


//class A
//{
//	public:
//		void Print()
//	{
//			std::cout << _pr << std::endl;
//	}
//
//private:
//	int _pr;
//	int _pt;
//};
//
//class B
//{
//public:
//	void Print()
//	{
//
//	}
//};
//
//class C
//{
//
//};
//
//int main()
//{
//	A a;
//	B b;
//	C c;
//	std::cout << sizeof(a) << std::endl;
//	std::cout << sizeof(b) << std::endl;
//	std::cout << sizeof(c) << std::endl;//B和C有一个字节大小纯属为了证明class存在
//
//	return 0;
//}


//class A
//{
//public:
//	void Print()
//	{
//		std::cout << "A::Print()" << std::endl;
//		std::cout << _a << std::endl;
//	}
//
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//
//	return 0;
//}