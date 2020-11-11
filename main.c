#include <stdio.h>
#include "myMath.h"

/**rounds a number 
 * */
int nfloor(double x)
{
	return (int)x;
}
/**
 * Function number one
 * */
double f1(double x)
{
	return sub(add(Exponent(nfloor(x)) ,Power(x,3)) , 2);
}
/**
 * Function number two
 * */
double f2(double x)
{
	return add(mul(x,3) , mul(Power(x,2),2));
}
/**
 * Function number three
 * */
double f3(double x)
{
	return sub(div(mul(Power(x,3),4),5) , mul(x,2));
}


int main()
{
	double x; // double var to take input 
	printf("Please insert a real numbr: "); // print to make pretty 
	int status = scanf(" %lf",&x); // take the input from the user
	if (status != 1) // check that the user inserted valid input 
	{
		printf("\nError in taking a real number input\n\n");
		return-1; // return -1 to notify program didn't run well
	}
	double v1 = f1(x); // activate all function 
	double v2 = f2(x); // 
	double v3 = f3(x); // 
	printf("The value of f(x)=e^x + x^3-2 at point %lf is:%0.4lf\n",x,v1);   // printing all values 
	printf("The value of f(x)= 3x +2x^2 at point %lf is:%0.4lf\n",x,v2);     //
	printf("The value of f(x)= (4x^3)/5 -2x at point %lf is:%0.4lf\n",x,v3); //
	
	return 1; 
}




