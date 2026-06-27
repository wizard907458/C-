#include<iostream>
#include<assert.h>

typedef int STDataType;

class Stack
{
public:
	void Init()
	{
		_a = nullptr;
		_top = _capacity = 0;
	}

	void Push(STDataType x)
	{
		if (_top == _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : _capacity * 2;
			STDataType* tmp = (STDataType*)realloc(_a, newcapacity * sizeof(STDataType));
			if (tmp == nullptr)
			{
				perror("realloc fail");
					return;
			}
			_a = tmp;
			_capacity = newcapacity;
		}
		_a[_top] = x;
		_top++;
	}

	void Pop()
	{
		assert(_top > 0);

		_top--;
	}

	bool Empty()
	{
		return _top == 0;
	}

	STDataType Top()
	{
		assert(_top > 0);

		return _a[_top - 1];
	}

	size_t Size()
	{
		return _capacity;
	}

	void Destory()
	{
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

private:
	STDataType* _a;
	size_t _top;
	size_t _capacity;
};

int main()
{
	Stack s;
	s.Init();
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);

	while (!s.Empty())
	{
		std::cout << s.Top() << std::endl;
		s.Pop();
	}

	s.Destory();

	return 0;
}