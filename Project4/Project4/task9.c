#include "Header.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	while (1)
	{
		system("cls");
		printf("������� ����� ��������:\n2 - ������� 2\n3 - ������� 3\n7 - ������� 7\n8 - ������� 8\n0 - �����\n\n");
		switch (getch())
		{
		case '2':
			system("cls");
			printf("������� 2:\n");
			incrementStackVariable();
			getch();
			break;
		case '3':
			system("cls");
			printf("������� 3:\n");
			incrementHeapVariable();
			getch();
			break;
		case '7':
			system("cls");
			printf("������� 7:\n");
			sortStackArray();
			getch();
			break;
		case '8':
			system("cls");
			printf("������� 8:\n");
			sortHeapArray();
			getch();
			break;
		case '0':
			return 0;
			break;
		default:
			system("cls");
			printf("���� �����?!\n");
			getch();
			break;
		}
	}
}