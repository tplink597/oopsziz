#include "Header.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	double eps;
	int n, k;
	do
	{
		system("cls");
		printf("������� ����� �������:\n1 - ������� 1\n2 - ������� 2\n3 - ������� 3\n4 - ������� 4\n5 - ������� 5\n6 - �����\n\n");
		switch (getch())
		{
		case '1':
			system("cls");
			printf("������� 1:\n");
			printf("n = "); scanf("%i", &n);
			printf("����� = %f\n", summdw(n));
			getch();
			break;
		case '2':
			system("cls");
			printf("������� 2:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("����� = %f\n", summ2dw(eps));
			getch();
			break;
		case '3':
			system("cls");
			printf("������� 3:\n");
			printf("n = "); scanf("%i", &n);
			printf("k = "); scanf("%i", &k);
			printdw(n, k);
			getch();
			break;
		case '4':
			system("cls");
			printf("������� 4:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("i = %d\n", findFirstElementdw(eps));
			getch();
			break;
		case '5':
			system("cls");
			printf("������� 5:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("i = %d\n", findFirstNegativeElementdw(eps));
			getch();
			break;
		case '6':
			return 0;
			break;
		default:
			system("cls");
			printf("� ��������� ��� ���� ������������...\n");
			getch();
			break;
		}
	} while(1);
}

double a(int i)
{
	return pow(-1, i) * (2 * (i + 1)) / (2 + (i + 1)*(i - 1));
}