#include "Header.h"
void writeArray(int *arr, int n)
{
	printf("\n������� 4:\n");
	for (int *i = arr; (i - arr) < n; i++)
	{
		printf("x[%d] = %d\n", i - arr, *i);
	}
}
