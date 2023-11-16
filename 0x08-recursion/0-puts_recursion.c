#include "main.h"

/**
* _puts_recursion - This function prints a string
* @s: This is the string literal to print
*
* Return: Always void.
*/

// takes pointer to a character as its value
void _puts_recursion(char *s)
{
	if (*s != '\0') //checks if the current character pointed to is not the null terminator that marks ed of string
	{
		_putchar(*s); //prints the current character
		_puts_recursion(s + 1); //recursion is used with pointer s incrememnted by 1, towards the next character
	}
	else
	{
		_putchar('\n'); //if the character pointed to is a null terminator, the function will print a new line and terminate the string
	}
}


