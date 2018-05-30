#include "Header.h"
void readArray(int *arr, int n)
{
	printf("\nЗадание 5:\n");
	for (int *i = arr; (i - arr) < n; i++)
	{
		printf("x[%d] = ", i - arr);
		scanf("%d", i);
	}
}
