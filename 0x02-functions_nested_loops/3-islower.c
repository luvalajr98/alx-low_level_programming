#include "main.h"

/**
 * _islower - Checks if character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
