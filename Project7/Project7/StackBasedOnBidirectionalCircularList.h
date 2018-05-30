#pragma once
#include "StackBase.h"
#include "BidirectionalCircularList.h"
template<typename T>
class StackBasedOnBidirectionalCircularList : public StackBase<T>
{
	BidirectionalCircularList<T> *Stack;
	int count;
public:
	StackBasedOnBidirectionalCircularList(int count)
		: Stack(), count(count) { }
	StackBasedOnBidirectionalCircularList(const StackBasedOnBidirectionalCircularList &other) //конструктор копирования
	{
		Stack = other.Stack;
		count = other.count;
	}
	StackBasedOnBidirectionalCircularList(StackBasedOnBidirectionalCircularList &&other)
	{
		Stack = other.Stack;
		count = other.count;
	}
	StackBasedOnBidirectionalCircularList<T> &operator=(const StackBasedOnBidirectionalCircularList &other)
	{
		if (this == &other)
		{
			return *this;
		}
		count = other.count;
		Stack = other.Stack;
	}
	StackBasedOnBidirectionalCircularList<T> &operator=(StackBasedOnBidirectionalCircularList &&other)
	{
		if (this == &other)
		{
			return *this;
		}
		count = other.count;
		Stack = other.Stack;
	}

	~StackBasedOnBidirectionalCircularList();

	void Push(T element) override  //Вставка (добавление) элемента
	{
		if (Stack->GetSize() < count)
		{
			Stack->Push(element, Stack->GetSize());
		}
	}

	T Pop() override  //Удаление (взятие) элемента
	{
		return Stack->Remove(1);
	}

	T Peek() override  //Просмотр (взятие без удаления) элемента
	{
		return Stack->Peek(1);
	}

	bool CheckNoEmptyStack() override  //Проверка наличия элементов
	{
		return Stack->CheckNoEmptyList();
	}

	friend ostream & operator << <T>(ostream & stream, const StackBasedOnBidirectionalCircularList<T> &a); //Вывод
};
template<typename T>
StackBasedOnBidirectionalCircularList<T>::~StackBasedOnBidirectionalCircularList()
{
	delete Stack;
}
template<typename T>
ostream & operator << (ostream & stream, const StackBasedOnBidirectionalCircularList<T> &a) //Вывод
{
	StackBasedOnBidirectionalCircularList<T> b = a;
	stream << "=====\n";
	for (int i = 0; i < b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}
	stream << "=====\n";
	return stream;
}
