#include "Header.h"
void incrementHeapVariable()
{
	int *x = (int *)malloc(sizeof(int));
	printf("x = "); scanf("%d", x);
	printf("Адрес переменной: %p\nЗначение переменной: %d\n", x, *x);
	increment(x);
	printf("Адрес переменной: %p\nЗначение переменной: %d\n", x, *x);
	free(x);
}
