#include "main.h"

/**
 * _memcpy - A function that copies memory area...
 *
 * @dest: Declare variable of Char type.
 *
 * @src: Declare variable of Char type.
 *
 * @n: Declare variable of unsigned int type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int increament;

	for (increament = 0; increament < n; increament++)
		dest[increament] = src[increament];

	return (dest);
}
