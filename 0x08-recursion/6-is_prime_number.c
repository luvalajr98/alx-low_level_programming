#include "main.h"
#include <stdio.h>

/**
 * prime - Function to evaluate is a number is prime.
 *
 * @i: numbers before n to divide.
 * @num: number to evaluate.
 *
 * Return: Give 1 for a prime number. 0 for not a prime.
 *
 */
int prime(int i, int num)
{
	//Base case to check if the num is greater than i, if true, functions open the next block
	if (i < num)
	{
	
	//checks if num is divisible by i evenly, if yes, then num is not prime number, prime number is only divisible by 1 and itself
		if (num % i == 0)
		{
			return (0);
		}
	}

	//checks if num = i, if true, means no other divisor is applicable apart from 1 and num, hence number is prime
	if (num == i)
	{
		return (1);
	}

	//if num != i, return is subjected to recursive function with i being incrememnted by 1
	else
	{
		return (prime(i + 1, num));
	}
}


/**
 * is_prime_number - function that said is a prime number.
 * @n: number to evaluate
 *
 * Return: 0 is not prime. 1 is prime.
 */
int is_prime_number(int n)
{
	// base case checking if n is a negative
	if (n <= 1)
	{
		return (0);
	}

	//calls the recursive function to find the prime number
	return (prime(2, n));
}
