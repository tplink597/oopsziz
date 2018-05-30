#pragma once
#include "iostream"
#include "conio.h"

using namespace std;

class Stack
{
	int *arr;
	int count;
	int end = 0, start = 0, size = 0;
public:
	Stack(int count); //�������������
	Stack(const Stack &other);  //�����������
	Stack(Stack &&other); //�����������
	Stack &operator=(const Stack &other); //������������
	Stack &operator=(Stack &&other); //������������ � ������������
	~Stack(); //����������
	int GetSize();
	void Push(int element); //������� (����������) ��������
	int Pop(); //�������� (������) ��������
	int Peek(); //�������� (������ ��� ��������) ��������
	bool CheckNoEmptyStack(); //�������� ������� ���������
	friend ostream & operator << (ostream & stream, const Stack &a); //�����
};

