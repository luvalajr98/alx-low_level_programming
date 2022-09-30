#include "main.h"

/**
 * main - Entry point : Prints all arguments it receives...
 *
 * @argv: Declare an array variable of Char type.
 *
 * @argc: Declare a variable of int type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
int main(int argc, char *argv[])
{
	int count_args;

	for (count_args = 0; count_args < argc; count_args++)
	{
		printf("%s\n", argv[count_args]);
	}

	return (0);
}
