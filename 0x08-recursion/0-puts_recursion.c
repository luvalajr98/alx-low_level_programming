#include "main.h"

/**
* _puts_recursion - This function prints a string
* @s: This is the string literal to print
*
* Return: Always void.
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}


