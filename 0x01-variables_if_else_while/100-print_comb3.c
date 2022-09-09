#include <stdio.h>

/**
 * main - prints all possible comnbinations of two different digits
 * in ascending order, seperated by a comma followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
