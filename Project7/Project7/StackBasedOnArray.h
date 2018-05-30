#pragma once
#include "StackBase.h"
template<typename T>
class StackBasedOnArray : public StackBase<T>
{
	T *array;
	int count;
	int end = 0, start = 0, size = 0;
public:
	StackBasedOnArray(int count); //�������������
	StackBasedOnArray(const StackBasedOnArray &other);  //�����������
	StackBasedOnArray(StackBasedOnArray &&other); //�����������
	StackBasedOnArray &operator=(const StackBasedOnArray &other); //������������
	StackBasedOnArray &operator=(StackBasedOnArray &&other); //������������ � �����������
	~StackBasedOnArray(); //����������
	int GetSize();

	void Push(T element) override  //������� (����������) ��������
	{
		if (size < count)
		{
			array[end] = element;
			end = (end + 1) % count;
			size++;
		}
	};

	T Pop() override  //�������� (������) ��������
	{
		if (size > 0)
		{
			T element = array[start];
			start = (start + 1) % count;
			size--;
			return element;
		}
		return 0;
	};

	T Peek() override  //�������� (������ ��� ��������) ��������
	{
		return array[start];
	};

	bool CheckNoEmptyStack() override  //�������� ������� ���������
	{
		return (size > 0);
	}

	friend ostream & operator << <T>(ostream & stream, const StackBasedOnArray<T> &a); //�����
};
template<typename T>
StackBasedOnArray<T>::StackBasedOnArray(int count)
	: count(count)
{
	array = new T[count];
}
template<typename T>
StackBasedOnArray<T>::~StackBasedOnArray()
{
	delete[] array;
}
template<typename T>
StackBasedOnArray<T>::StackBasedOnArray(const StackBasedOnArray &other)
{
	array = new T[other.count];
	count = other.count;
	end = other.end;
	start = other.start;
	size = other.size;
	for (int i = 0; i < count; ++i)
	{
		array[i] = other.array[i];
	}
}
template<typename T>
StackBasedOnArray<T> &StackBasedOnArray<T>::operator=(const StackBasedOnArray &other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] array;
	array = new T[other.count];
	count = other.count;
	for (int i = 0; i < count; ++i)
	{
		array[i] = other.array[i];
	}
}
template<typename T>
StackBasedOnArray<T> &StackBasedOnArray<T>::operator=(StackBasedOnArray &&other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] array;
	array = other.array;
	count = other.count;
	other.array = nullptr;
}
template<typename T>
StackBasedOnArray<T>::StackBasedOnArray(StackBasedOnArray &&other)
{
	array = other.array;
	count = other.count;
	other.array = nullptr;
}
template<typename T>
int StackBasedOnArray<T>::GetSize()
{
	return this->size;
};
template<typename T>
ostream & operator << (ostream & stream, const StackBasedOnArray<T> &a)
{
	StackBasedOnArray<T> b = a;
	stream << "=====\n";
	for (int i = 0; i < b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}
	stream << "=====\n";
	return stream;
}

