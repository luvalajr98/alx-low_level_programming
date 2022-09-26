#include "main.h"

/**
 * _putchar - The entry point that prints out the Characters as output
 *
 * @c: the declareed value initialization
 *
 * Return: on Success 1.
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
