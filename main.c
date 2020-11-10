#include <stdio.h>
#include "myMath.h"
int nfloor(double x)
{
	return (int)x;
}

double f1(double x)
{
	return Exponent(nfloor(x)) + Power(x,3) -2;
}

double f2(double x)
{
	return mul(3,x) + mul(2,Power(x,2));
}

double f3(double x)
{
	return div(mul(4,Power(x,3)),5) - mul(2,x);
}


int main()
{
	double x;
	printf("Please insert a real numbr: ");
	int status = scanf(" %lf",&x);
	if (status != 1)
	{
		printf("\nError in taking a real number input\n\n");
		return-1; // return -1 to notify program didn't run well
	}
	double v1 = f1(x);
	double v2 = f2(x);
	double v3 = f3(x);
	printf("The value of f(x)=e^x + x^3-2 at point %lf is:%lf\n",x,v1);
	printf("The value of f(x)= 3x +2x^2 at point %lf is:%lf\n",x,v2);
	printf("The value of f(x)= (4x^3)/5 -2x at point %lf is:%lf\n",x,v3);
	
	return 1;
}




