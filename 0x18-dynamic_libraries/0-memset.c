#include "main.h"

/**
*_memset - fills memory area with a constant byte,
*
*@s: refers to the memory area.
*
*@b: constant byte to be used.
*
*@n: bytes filled.
*
*Return: the pointer to dest.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
