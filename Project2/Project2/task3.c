#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
_Bool isInArea(double x, double y);
double f(double x);
void main()
{
	setlocale(LC_ALL, "Rus");
	double x, y;
	printf("������� ����� �������:");
	switch (getch())
	{
	case '1':
		printf("\n������� 1\n");
		printf("������� x\nx=");
		scanf("%lf", &x);
		printf("������� �\ny=");
		scanf("%lf", &y);
		if (isInArea(x, y)) {
			printf("�����!\n");
		}
		else {
			printf("����!\n");
		}
		getch();
		break;
	case '2':
		printf("\n������� 2\n");
		printf("������� x\nx=");
		scanf("%lf", &x);
		printf("f(x)= %f\n", f(x));
		getch();
		break;
	default:
		printf("\n��� ���� ��������� ������!\n");
		getch();
		break;
	}
}