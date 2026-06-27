////1. 栈的定义
////2. 栈初始化
////3. 销毁
////4. 进栈
////5. 判断是否为空
////6. 出栈
////7. 取栈顶元素
////8. 栈大小
//
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//typedef int STDataType;
//
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void Init(ST* ps)
//{
//	assert(ps);
//
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}
//
//void Destory(ST* ps)
//{
//	assert(ps);
//
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = ps->capacity = 0;
//}
//
//void Push(ST* ps, STDataType x)
//{
//	assert(ps);
//
//	if (ps->top == ps->capacity)
//	{
//		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(ps->a, newcapacity * sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//		ps->a = tmp;
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//bool Empty(ST* ps)
//{
//	assert(ps);
//
//	return ps->top == 0;
//}
//
//void Pop(ST* ps)
//{
//	assert(ps);
//	assert(!Empty(ps));
//
//	ps->top--;
//}
//
//STDataType Top(ST* ps)
//{
//	assert(ps);
//	assert(!Empty(ps));
//
//	return ps->a[ps->top - 1];
//}
//
//int Size(ST* ps)
//{
//	assert(ps);
//
//	return ps->capacity;
//}
//
//int main()
//{
//	ST s;
//    Init(&s);
//	Push(&s, 1);
//	Push(&s, 2);
//	Push(&s, 3);
//	Push(&s, 4);
//
//	while (!Empty(&s))
//	{
//		printf("%d\n", Top(&s));
//		Pop(&s);
//	}
//	Destory(&s);
//
//	return 0;
//}