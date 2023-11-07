#include "main.h"

/**
 * _isupper - a function that checks for uppercase characters in the program
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise if c is not uppercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
