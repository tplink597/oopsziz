#include "Header.h"
void incrementStackVariable()
{
	int x;
	printf("x = "); scanf("%d", &x);
	printf("����� ����������: %p\n�������� ����������: %d\n", &x, x);
	increment(&x);
	printf("����� ����������: %p\n�������� ����������: %d\n", &x, x);
}
