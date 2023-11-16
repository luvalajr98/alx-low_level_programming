#include "main.h"

/**
* factorial - this function returns the factorial of a given number
*
* @n: integer factorial
*
* Return: factorial number value
*/

int factorial(int n) //takes an integer n as its parameter, returns an integer which represents the factorial of n
{

	if (n == 0) //checks whether the n = 0, if yes, returns 1
	{
		return (1);
	}
	if (n < 0) // checks if n is a negative value, if yes returns -1

	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1)); // only if n is a positive number other than 0, will repeat the recursive call untill n is 0
	}
}
