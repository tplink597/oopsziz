#include "Header.h"
void sortStackArray()
{
	int n = 10;
	int x[10];
	readArray(x, n);
	writeArray(x, n);
	sort(x, n);
	writeArray(x, n);
}
