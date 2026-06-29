// Day01-constPro.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"global.h"

int global_i = 1024;//全局变量

int main()
{
    std::cout << "Hello World!\n";
    //const变量必须初始化
    const int a = 10;
    int const a1 = 10;

    int i1 = 10;
    const int i2 = i1;
    int i3 = i2;

    std::cout << "Day01-constPro.cpp bufSzie Adress: " << &bufSize << std::endl;
    std::cout << "Day01-constPro.cpp bufSzie2 Adress: " << &bufSize2 << std::endl;


    PrintBufAdress();

    {
        //把引用绑定到const对象上
        const int ci = 1024;
        const int& ri = ci;

        //将const引用绑定到一个非const的变量
        int i5 = 1024;
        const int& r5 = i5;

        //常量引用绑定字面量
        const int& r6 = 1024;

        //常量引用绑定表达式计算的值
        const int& r7 = r6 * 2;
        const int& r8 = i5 * 2 + 10;

    }

    {
        //程序报错，类型不匹配
        /*double dval = 3.14;
        int& rd = dval;*/

        double dval = 3.14;
        const int& ri = dval;
//相当于const int temp = dval;const int& rd = temp;


        //对const的引用不一定是const的对象，常量引用仅对引用可参与的操作做了限制，对引用的对象本身是不是一个常量未作限制
        int i9 = 1024;
        int& r9 = i9;
        const int& r10 = i9;
        r9 = 2048;
    }

    {
        //PI是一个常量
        const double PI = 3.14;
        //错误，ptr是一个普通指针
        /*double* ptr = &PI;*/
        const double* cptr = &PI;
        //依旧是前面权限小于后面

        int i10 = 2048;
        const int* ptr2 = &i10;
    }

    {
        int errNumb = 0;
        //curErr是一个常量指针
        int* const curErr = &errNumb;
        const double pi2 = 3.14;
        //pip是一个指向常量对象的常量指针
        const double* const pip = &pi2;
    }

    {
        //用于声明引用的const都是底层const
        const int& r = 0;
    }

    {
        constexpr int mf = 20;
        constexpr int limit = mf + 10;
        /*constexpr int sz = GetSize();*/ //GetSize不是常量表达式需要运行时才返回值

        constexpr int sz = GetSizeConst();
    }

    {
        const int* p = nullptr;
        constexpr int* q = nullptr;//这个功能和int * const q类似
        //constexpr 指针的初始值必须为nullptr 或者 0 或者 某个对象地址

        //函数内局部变量在栈上，每次调用函数分配的地址不同，编译期无法确定，无法给constexpr赋值
        constexpr int* m = nullptr;
        constexpr int* cm = &global_i;
    }

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