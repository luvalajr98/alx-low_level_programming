#include "main.h"

/**
 * _strstr - A function that locates a substring...
 *
 * @haystack: Declare variable of Char type.
 *
 * @needle: Declare variable of Char type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
