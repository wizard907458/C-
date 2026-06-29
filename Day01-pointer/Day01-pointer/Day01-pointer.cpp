// Day01-pointer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    //只能引用指针，不能对引用的指针，因为引用本身不开辟新内存，没有地址
    int init = 43;
    int* pinit = nullptr;
    int*& rpinit = pinit;
    rpinit = &init;

    std::cout << &init << std::endl;
    std::cout << pinit << std::endl;
    std::cout << rpinit << std::endl;

    *rpinit = 0;

    std::cout << init << std::endl;

    //
    int arr[5] = { 1,2,3,4,5 };
    int* ptr_arr = arr;
    std::cout << "首元素的地址为: " << ptr_arr << std::endl;
    std::cout << "首元素为: " << *ptr_arr << std::endl;

    *ptr_arr = 1024;
    std::cout << "首元素为: " << *ptr_arr << std::endl;

    ptr_arr++;
    std::cout << "第二个元素为: " << *ptr_arr << std::endl;
    std::cout << "第二个元素地址为: " << ptr_arr << std::endl;



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
