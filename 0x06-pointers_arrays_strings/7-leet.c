#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	char c[] = "AaEeOoTtLl";
	char n[] = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
