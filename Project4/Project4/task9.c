#include "Header.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	while (1)
	{
		system("cls");
		printf("Введите номер действия:\n2 - Задание 2\n3 - Задание 3\n7 - Задание 7\n8 - Задание 8\n0 - Выход\n\n");
		switch (getch())
		{
		case '2':
			system("cls");
			printf("Задание 2:\n");
			incrementStackVariable();
			getch();
			break;
		case '3':
			system("cls");
			printf("Задание 3:\n");
			incrementHeapVariable();
			getch();
			break;
		case '7':
			system("cls");
			printf("Задание 7:\n");
			sortStackArray();
			getch();
			break;
		case '8':
			system("cls");
			printf("Задание 8:\n");
			sortHeapArray();
			getch();
			break;
		case '0':
			return 0;
			break;
		default:
			system("cls");
			printf("Куда жмешь?!\n");
			getch();
			break;
		}
	}
}