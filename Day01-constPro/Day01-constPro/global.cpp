#include"global.h"
#include <iostream>

extern const int bufSize2 = 512;

void PrintBufAdress()
{
	std::cout << "global.cpp bufSize Adress: " << &bufSize << std::endl;
	std::cout << "global.cpp bufSize2 Adress: " << &bufSize2 << std::endl;
}

int GetSize()
{
	return 20;
}