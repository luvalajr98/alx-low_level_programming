#include <stdio.h>

/**
 * main - Prints size of characters
 * this program is mainly used to print the size of characters
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char)); //size of a single character
	printf("Size of an int: %zu byte(s)\n", sizeof(int)); //size of an interger
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int)); //size of a long interger
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int)); //size of a long long interger
	printf("Size of a float: %zu byte(s)\n", sizeof(float)); //size of a float
	return (0);
}