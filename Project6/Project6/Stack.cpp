#include "Stack.h"

Stack::Stack(int count)
	: count(count)
{
	arr = new int[count];
}

Stack::~Stack()
{
	delete[] arr;
}

Stack::Stack(const Stack &other)
{
	arr = new int[other.count];
	count = other.count;
	end = other.end;
	start = other.start;
	size = other.size;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}

Stack &Stack::operator=(const Stack &other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = new int[other.count];
	count = other.count;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}

Stack &Stack::operator=(Stack &&other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = other.arr;
	count = other.count;
	other.arr = nullptr;
}

Stack::Stack(Stack &&other)
{
	arr = other.arr;
	count = other.count;
	other.arr = nullptr;
}

int Stack::GetSize()
{
	return this->size;
}

void Stack::Push(int element)
{
	if (size < count)
	{
		arr[end] = element;
		end = (end + 1) % count;
		size++;
	}
}

int Stack::Pop()
{
	if (size > 0)
	{
		int element = arr[start];
		start = (start + 1) % count;
		size--;
		return element;
	}
	return 0;
}

int Stack::Peek()
{
	return arr[start];
}
bool Stack::CheckNoEmptyStack()
{
	return (size > 0);
}

ostream & operator << (ostream & stream, const Stack &a)
{
	Stack b = a;
	stream << "=====\n";
	for (int i = 0; i < b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}
	stream << "=====\n";
	return stream;
}
