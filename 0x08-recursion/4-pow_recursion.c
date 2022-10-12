#include "main.h"

/**
* _pow_recursion - returns the value of x raised to power of y
* @x: base integer
* @y: integer power raised to
*
* Return: value of x Power raised to y
*/

int _pow_recursion(int x, int y)
{

	if (y == 0)

	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
