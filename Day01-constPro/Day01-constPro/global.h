#pragma once

const int bufSize = 512;

extern const int bufSize2;

void PrintBufAdress();

extern int GetSize(); 

inline int constexpr GetSizeConst()
{
	return 1;
}