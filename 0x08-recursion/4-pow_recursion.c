#include "main.h"

/**
* _pow_recursion - returns the value of x raised to power of y
* @x: base integer
* @y: integer power raised to
*
* Return: value of x Power raised to y
*/

int _pow_recursion(int x, int y) //functioin that takes two integers and returns an integer representing x raised to power y
{

	if (y == 0) //checks if y is 0, if it is return 1, as any number raised to 0 is 1.

	{
		return (1);
	}
	if (y < 0) //checks if y is a negative number, return -1 if it is.
	{
		return (-1);
	}
	else
	{
		y--; //if all parameter cases are satisfied, the program returns the results after a decrement of y until y = 0

		return (x * _pow_recursion(x, y));//returns the value of x raised to the power of y
	}
}
