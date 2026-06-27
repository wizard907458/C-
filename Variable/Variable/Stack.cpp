#include"Stack.h"

void STInit(ST* ps, int n)//缺省参数声明和定义不能同时给
{
	assert(ps && n > 0);
	ps->a = (STDataType *)malloc(n * sizeof(STDataType));
	ps->top = 0;
	ps->capacity = n;
}
