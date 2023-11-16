#include "main.h"

/**
* _print_rev_recursion - this fucntion prints a string in reverse.
* @s: the string literal to print in reverse
*
* Return: Always void.
*/

void _print_rev_recursion(char *s) //this function takes pointer to character as its value
{
	if (*s == '\0') //this checks whether the current character is a null terminator
	{
		s--; 
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s); //since the recursve function is called before the printing of the current character, the string is printed in reverse
	}
}
