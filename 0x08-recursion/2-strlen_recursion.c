#include "main.h"

/**
* _strlen_recursion - Function that returns the length of a string
*
* @s: String to check length
*
* Return: Returns an integer that is the length of the string
*/

int _strlen_recursion(char *s) //function takes pointer to a string as its parameter
{
	if (*s != '\0') //checks if the current character is the null terminator
		return (1 + _strlen_recursion(s + 1)); //inceremwnts with 1 to the next character untill it gets to the terminator, returning the length of string as an integer

	return (0); //terminates the recursive call once the teminator is reached and returns 0
}
