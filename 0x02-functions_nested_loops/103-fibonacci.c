#include "main.h"
#include <stdio.h>

/**
 * main - prints sum of the even terms in fibonacci below 4M
 *
 * Return: 0 on success and the print stated
 */

int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int fn = 2;
	int sum = 0;

	while (fn < 4000000)
	{
		if (fn % 2 == 0)
			sum += fn;
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	printf("%d\n", sum);
	return (0);
}
