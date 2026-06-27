#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

//using namespace std;
//
//int main()
//{
//	cout << "Hello World!" << endl;
//	return 0;
//}

//namespace bit
//{
//	int rand = 10;
//
//	int ret(int a, int b)
//	{
//		return a + b;
//	}
//
//	struct Node {
//		struct Node* next;
//		int val;
//	};
//
//}
//int main()
//{
//	std::cout << rand << std::endl;//rand随机的
//	std::cout << bit::rand << std::endl;//rand bit中的
//	return 0;
//}


//命名空间的嵌套
//namespace bit
//{
//	namespace a
//	{
//		int rand = 1;
//
//		int Add(int left, int right)
//		{
//			return (left + right);
//		}
//}
//	namespace b
//	{
//		int rand = 2;
//		int Add(int left, int right)
//		{
//			return (left + right) * 10;
//		}
//	}
//}
//
//int main()
//{
//	std::cout << bit::a::rand << std::endl;
//	std::cout << bit::a::Add(5,2) << std::endl;
//	std::cout << bit::b::rand << std::endl;
//	std::cout << bit::b::Add(5,2) << std::endl;
//	return 0;
//}

//namespace N//命名空间的展开
//{
//	int a = 1;
//	int b = 2;
//}
//
//using N::b;
//
//using namespace N;
//
//int main()
//{
//	std::cout << N::a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << a << std::endl;
//}


//int main()
//{
//	int a = 0;
//	double b = 0.1;
//	char c = 'x';
//
//	std::cout << a << " " << b << " " << c << std::endl;
//
//	scanf("%d %lf", &a, &b);
//	printf("%d %lf", a, b);
//
//std::cin >> a;
//std::cin >> b >> c;//空格回车两种分隔方式都行
//
//std::cout << a << std::endl;
//std::cout << b << " " << c << std::endl;
//
//std::ios_base::sync_with_stdio(false);//C++和C输入输出共用一套缓冲区，同步会拖慢进度，关闭同步后，C++流独立缓冲
//std::cin.tie(nullptr);//每次默认cin读取前，会自动刷新cout缓冲区，造成耗时，解绑后读输入不会强制刷新输入，节省开销
//std::cout.tie(nullptr);//劫持cout自身绑定，进一步减少刷新操作
//
//return 0;
//	
//}


//void Fun(int a = 0)//缺省参数
//{
//	std::cout << a << std::endl;
//}
//
//int main()
//{
//	Fun();
//	Fun(10);
//
//	return 0;
//}

//void Fun1(int a, int b = 10, int c = 20)//半缺省参数
//{
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//	std::cout << "c = " << c << std::endl;
//}
//
//void Fun2(int a = 10, int b = 20, int c = 30)//全缺省参数
//{
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//	std::cout << "c = " << c << std::endl;
//}
//
//int main()
//{
//	Fun1(1);
//	Fun1(1, 2);
//	Fun1(1, 2, 3);
//
//	Fun2(1);
//	Fun2(1, 2);
//	Fun2(1, 2, 3);
//
//	return 0;
//}

//int Add(int left, int right)//参数类型不同
//{
//	std::cout << "int Add(int left, int right)" << std::endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	std::cout << "double Add(double left, double right)" << std::endl;
//	return left + right;
//}
//
//void f()//参数个数不同
//{
//	std::cout << "f()" << std::endl;
//}
//
//void f(int a)
//{
//	std::cout << "f(int a)" << std::endl;
//}
//
//void f(int a, char b)//参数类型顺序不同
//{
//	std::cout << "f(int a, char b)" << std::endl;
//}
//
//void f(char a, int b)
//{
//	std::cout << "f(char a, int b)" << std::endl;
//}
//
//void f1()//这两个函数构成重载, 但是f()但是调用时，会报错，存在歧义，编译器不知道调用谁 
//{
//	std::cout << "f1()" << std::endl;
//}
//
//void f1(int m = 10)
//{
//	std::cout << "f1(int m = 10)" << std::endl;
//}
//
//int main()
//{
//	Add(1, 2);
//	Add(1.1, 2.2);
//
//	f();
//	f(10);
//
//	f(10, 'p');
//	f('q', 20);
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 9;//引用的定义
//	//int & b = a;
//	//int & c = a;
//	//int & d = b;
//
//	//d++;
//
//	//std::cout << &a << std::endl;
//	//std::cout << &b << std::endl;
//	//std::cout << &c << std::endl;
//	//std::cout << &d << std::endl;
//
//	int a = 0;
//	int& b = a;//引用必须初始化
//	int c = 20;
//	b = c;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << c << std::endl;
//
//	return 0;
//}

//void swap(int& rx, int& ry)//引用传参和指针传参类似
//{
//	int tmp = rx;
//	rx = ry;
//	ry = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	std::cout << a << " " << b << std::endl;
//
//	swap(a, b);
//	std::cout << a << " " << b << std::endl;
//
//	return 0;
//}


//int main()
//{
//	const int a = 10;
//	const int& ra = a;
//
//	int b = 20;
//	const int& rb = b;//缩小权限
//}


//inline int Add(int left, int right)
//{
//	int ret = left + right;
//	ret += 1;
//	ret += 1;
//	ret += 1;
//	return ret;
//}

//#define Add(a,b) ((a) + (b))
//
//int main()
//{
//	int ret = Add(1, 2);
//	std::cout << ret << std::endl;
//	std::cout << ret * 5 << std::endl;
//
//	int x = 1;
//	int y = 2;
//	std::cout << Add(x & y, x | y) << std::endl;
//
//	return 0;
//}


void f(int x)
{
	std::cout << "f(int x)" << std::endl;
}

void f(int* x)
{
	std::cout << "f(int * x)" << std::endl;
}

int main()
{
	f(0);
	f(NULL);
	f((int*)NULL);
	//f((void*)NULL);重载函数没有匹配的
	f(nullptr);

	return 0;
}