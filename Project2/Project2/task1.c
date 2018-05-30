
_Bool isInArea(double x, double y)
{
	if (x >= -1 && y <= 1 && (x - y) <= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
