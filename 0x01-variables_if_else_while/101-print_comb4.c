#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints all possible combinations of three different digits
 * in ascending order, separated by a comma followed by a sopace.
 *
 * Return: Always 0.
 */

int main(void)

{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2	% 10) + '0');
				putchar((digit3 % 10) + '0');
				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
=======
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
>>>>>>> e7d034443369feff4d6cc9e5c67845ef62c18922
	return (0);
}
