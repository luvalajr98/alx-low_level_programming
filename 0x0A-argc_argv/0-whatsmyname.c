#include "main.h"

/**
 * main - Entry point : Print the name of the file followed by a new line..
 *
 * @argv: Declare an array variable of Char type.
 *
 * @argc: Declare a variable of int type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
