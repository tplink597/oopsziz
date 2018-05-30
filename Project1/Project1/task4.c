/*#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"
double x, result;
void f();
void main()
{
	x = 5;
	f();
	printf("x = %.4f\nf = %.4f\n\n", x, result);
	printf("x = ");
	scanf("%lf", &x);
	f();
	printf("f = %.4f", result);
	getch();
}
void f()
{
	result=(pow(x, 2) + 2 * x - 3 + (x + 1)*sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x - 1)*sqrt(pow(x, 2) - 9));
}*/