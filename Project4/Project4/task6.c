#include "Header.h"
void sort(int *arr, int n)
{
	_Bool end = 1;
	int a;

	while (end)
	{
		end = 0;
		for (int *i = arr; (i - arr) < n - 1; i++)
		{
			if (*(i) > *(i + 1))
			{
				a = *(i);
				*(i) = *(i + 1);
				*(i + 1) = a;
				end = 1;
			}
		}
	}
}
