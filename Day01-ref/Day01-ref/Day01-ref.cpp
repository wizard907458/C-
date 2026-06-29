// Day01-ref.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

std::string foo()
{
    return std::string("Hello World!");
}

int main()
{
    int a = 10;
    int& b = a;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << &a << std::endl;
    std::cout << &b << std::endl;

    a = 20;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    int c = 300;//修改b的值，但是b的地址不变,没有与a解绑
    b = c;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c<< std::endl;

    std::cout << &a << std::endl;
    std::cout << &b << std::endl;
    std::cout << &c << std::endl;

    //左值引用
    int p = 10;
    int& q = p;

    //右值引用
    int&& m = 20;
    std::string&& d = foo();

    std::cout << "Hello World!\n";


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
