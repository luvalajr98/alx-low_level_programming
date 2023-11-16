#include "main.h"
#include <stdio.h>

/**
 * root_square - Returns the natural square root of a number
 * otherwise return 0.
 *
 * @n: result to find.
 * @num: number multiply by itself give the result.
 * Return: root square of the number
 *
 */
int root_square(int num, int n) //accepts and takes two integers as its parameters and returns an int as the result of the square root 
{
	//the base checks if the square of num equals to n, if yes, returns num as the square root of n 
	if (num * num == n)
	{
		return (num);
	}

	//if the square of num exceeds n, function returns -1
	else if (num * num > n)
	{
		return (-1);
	}

	//if not all base cases are satisfied, the recursive function is is recalled after increment of the num int
	else
	{
		num++;
	}
	return (root_square(num, n));
}

/**
 * _sqrt_recursion - Function that give natural square root of a number
 *
 * @n: number to find root square.
 * Return: natural square root of a number.
 *
 */
int _sqrt_recursion(int n)
{
	//base case to check if the int n is a negative
	if (n < 0)
	{
		return (-1);
	}

	//checks if int n is 0, square root of 0 is 0
	if (n == 0)
	{
		return (0);
	}

	//checks if int n = 1
	if (n == 1)
	{
		return (1);
	}

	//if neither of the base cases is satisfied, a recursive function is called to find square root of n
	else
	{
		return (root_square(2, n));
	}
}
