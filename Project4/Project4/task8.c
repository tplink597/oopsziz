#include "Header.h"
void sortHeapArray()
{
	int n = 10;
	printf("n = "); scanf("%d", &n);
	int *x = (int *)malloc(n * sizeof(int));
	readArray(x, n);
	writeArray(x, n);
	sort(x, n);
	writeArray(x, n);
	free(x);
}
