#include "Header.h"
void incrementStackVariable()
{
	int x;
	printf("x = "); scanf("%d", &x);
	printf("Адрес переменной: %p\nЗначение переменной: %d\n", &x, x);
	increment(&x);
	printf("Адрес переменной: %p\nЗначение переменной: %d\n", &x, x);
}
