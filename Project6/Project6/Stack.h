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
	Stack(int count); //инициализация
	Stack(const Stack &other);  //копирование
	Stack(Stack &&other); //перемещение
	Stack &operator=(const Stack &other); //присваивание
	Stack &operator=(Stack &&other); //присваивание с перемещением
	~Stack(); //деструктор
	int GetSize();
	void Push(int element); //Вставка (добавление) элемента
	int Pop(); //Удаление (взятие) элемента
	int Peek(); //Просмотр (взятие без удаления) элемента
	bool CheckNoEmptyStack(); //Проверка наличия элементов
	friend ostream & operator << (ostream & stream, const Stack &a); //Вывод
};

