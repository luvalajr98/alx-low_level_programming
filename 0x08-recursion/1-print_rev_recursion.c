#include "main.h"

/**
* _print_rev_recursion - this fucntion prints a string in reverse.
* @s: the string literal to print in reverse
*
* Return: Always void.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
}
