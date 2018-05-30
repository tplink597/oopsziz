#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
_Bool isInArea(double x, double y);
double f(double x);
void main()
{
	setlocale(LC_ALL, "Rus");
	double x, y;
	printf("Введите номер задания:");
	switch (getch())
	{
	case '1':
		printf("\nЗадание 1\n");
		printf("Введите x\nx=");
		scanf("%lf", &x);
		printf("Введите у\ny=");
		scanf("%lf", &y);
		if (isInArea(x, y)) {
			printf("Ранил!\n");
		}
		else {
			printf("Мимо!\n");
		}
		getch();
		break;
	case '2':
		printf("\nЗадание 2\n");
		printf("Введите x\nx=");
		scanf("%lf", &x);
		printf("f(x)= %f\n", f(x));
		getch();
		break;
	default:
		printf("\nЭто ваша последняя ошибка!\n");
		getch();
		break;
	}
}