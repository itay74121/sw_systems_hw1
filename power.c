#include "myMath.h"


double Exponent(int x) 
{
	double m = 1;
	if (x==0)
		return 1;
	if (x>0)
	{
		for (int i =0; i<x;i++)
			m*=E;
		return m;
	}
	else
	{
		for (int i =0; i<x;i++)
			m*=E;
		return 1/m;

	}
}
double Power(double x , int y)
{
	double m = 1;
	if (y==0)
		return 1;
	if (y>0)
	{
		for (int i =0; i<y;i++)
			m*=x;
		return m;
	}
	else
	{
		for (int i =0; i<y;i++)
			m*=x;
		return 1/m;

	}
}

