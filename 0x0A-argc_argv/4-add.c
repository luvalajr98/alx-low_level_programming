#include "main.h"

/**
 * main - A  program that adds positive numbers...
 *
 * @argv: Declare an array variable of Char type.
 *
 * @argc: Declare a variable of int type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
