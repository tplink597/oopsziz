#include "Header.h"
int findFirstNegativeElementw(double eps)
{
	int i = 0;
	while (1)
	{
		if ((fabs(a(i)) <= eps) && (a(i) < 0))
		{
			return i;
		}
		++i;
	}
}