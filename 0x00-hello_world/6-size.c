#include <stdio.h>

/*
* main - prints the size of characters
* This program is mainly used to print the sizes of characters
* Return: Always 0 (success)
*/

int main(void)

{
	printf("size of a char: %zu byte(s)\n", sizeof(char)); //size of a char
	printf("size of an int: %zu byte(s)\n", sizeof(int)); //size of an interger
	printf("size of a long int: %zu byte(s)\n", sizeof(long int)); //size of a long int
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int)); //size of a long long interger
	printf("Size of a float: %zu byte(s)\n", sizeof(float)); //size of a float
	return(0);
}