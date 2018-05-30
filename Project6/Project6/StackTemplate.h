#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
template<typename T>
class StackTemplate
{
	T *arr;
	int count;
	int end = 0, start = 0, size = 0;
public:
	StackTemplate(int count); //инициализация
	StackTemplate(const StackTemplate &other);  //копирование
	StackTemplate(StackTemplate &&other); //перемещение
	StackTemplate &operator=(const StackTemplate &other); //присваивание
	StackTemplate &operator=(StackTemplate &&other); //присваивание с еремещением
	~StackTemplate(); //деструктор
	int GetSize();
	void Push(T element); //Вставка (добавление) элемента
	T Pop(); //Удаление (взятие) элемента
	T Peek(); //Просмотр (взятие без удаления) элемента
	bool CheckNoEmptyStack(); //Проверка наличия элементов
	friend ostream & operator << <T>(ostream & stream, const StackTemplate<T> &a); //Вывод
};
template<typename T>
StackTemplate<T>::StackTemplate(int count)
	: count(count)
{
	arr = new T[count];
}
template<typename T>
StackTemplate<T>::~StackTemplate()
{
	delete[] arr;
}
template<typename T>
StackTemplate<T>::StackTemplate(const StackTemplate &other)
{
	arr = new T[other.count];
	count = other.count;
	end = other.end;
	start = other.start;
	size = other.size;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}
template<typename T>
StackTemplate<T> &StackTemplate<T>::operator=(const StackTemplate &other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = new T[other.count];
	count = other.count;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}
template<typename T>
StackTemplate<T> &StackTemplate<T>::operator=(StackTemplate &&other)
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
template<typename T>
StackTemplate<T>::StackTemplate(StackTemplate &&other)
{
	arr = other.arr;
	count = other.count;
	other.arr = nullptr;
}
template<typename T>
int StackTemplate<T>::GetSize()
{
	return this->size;
}
template<typename T>
void StackTemplate<T>::Push(T element)
{
	if (size < count)
	{
		arr[end] = element;
		end = (end + 1) % count;
		size++;
	}
}
template<typename T>
T StackTemplate<T>::Pop()
{
	if (size > 0)
	{
		T element = arr[start];
		start = (start + 1) % count;
		size--;
		return element;
	}
	return 0;
}
template<typename T>
T StackTemplate<T>::Peek()
{
	return arr[start];
}
template<typename T>
bool StackTemplate<T>::CheckNoEmptyStack()
{
	return (size > 0);
}
template<typename T>
ostream & operator << (ostream & stream, const StackTemplate<T> &a)
{
	StackTemplate<T> b = a;
	stream << "=====\n";
	for (int i = 0; i < b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}
	stream << "=====\n";
	return stream;
}

