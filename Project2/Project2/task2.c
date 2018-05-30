#include <math.h>
double f(double x)
{
	return x<=3 ? (pow(x, 2) - 3 * x + 9) : (1 / (pow(x, 3) + 6));
}