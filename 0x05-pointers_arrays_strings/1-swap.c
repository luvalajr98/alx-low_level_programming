#include "main.h"

/**
 * swap_int - swaps two integers values given
 * @a: first integer
 * @b: second integer
 * Return: null return
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
