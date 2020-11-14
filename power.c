#include "myMath.h"
/*Return |x|
 * */
int abs(int x )
{
	if (x==0) // no need to change the input 
		return x;
	if (x>0) // no need to change the input since its positive
		return x;
	else // change the input since it's negative 
		return -x;
}


/*This function calculates and exponent like e^x
 * @ int x - variable x is a whole number 
 * */
double Exponent(int x) 
{
	double m = 1; // set m to 1 
	if (x==0) // if x is 0
		return m; // return m as it is 
	if (x>0) // if x is bigger than zero 
	{
		for (int i =0; i<x;i++) // loop x times 
			m*=E; // multiply by the constant E
		return m; // return m the answer
	}
	else // otherwise x is a negative int 
	{
		for (int i =0; i<abs(x);i++) // loop x times 
			m*=E; // multiply by E x times 
		return 1/m; // do m^-1

	}
}


/*This funxtion raises x to the power of y 
 * @ double x  real number x 
 * @ int y a whole number y
 * */
double Power(double x , int y)
{
	double m = 1; // set m to 0
	if (y==0) // check if y is 0 which is an easy case 
		return m; // return m as it is since it's 1
	if (y>0) // if y is positive int 
	{
		for (int i =0; i<y;i++) //loop y times to multiply y times
			m*=x; // multiply by x 
		return m; // return x 
	}
	else // otherwise y is a negative int 
	{ 
		for (int i =0; i<abs(y);i++) // loop y times and use abs y since y in negative.
			m*=x; // multiply by x 
		return 1/m; // return m^-1 since we need reverse the power.

	}
}

