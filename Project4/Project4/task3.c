#include "Header.h"
void incrementHeapVariable()
{
	int *x = (int *)malloc(sizeof(int));
	printf("x = "); scanf("%d", x);
	printf("����� ����������: %p\n�������� ����������: %d\n", x, *x);
	increment(x);
	printf("����� ����������: %p\n�������� ����������: %d\n", x, *x);
	free(x);
}
