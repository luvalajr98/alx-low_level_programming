#include "main.h"

/**
 * main - Entry point : Prints the number of arguments passed into it.
 *
 * @argv: Declare an array variable of Char type.
 *
 * @argc: Declare a variable of int type.
 *
 * Return: 0 on no return and 1 on success and -1 on error(stderr)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
