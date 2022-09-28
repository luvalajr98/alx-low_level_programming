#ifndef MAIN_H
#define MAIN_H

/**
* Authored by Luvala
* 2022
*/

/**
* void prototypes ()
* int prototypes ()
*
*/

int _putchar(char c); /* Inputs characters*/

void _puts_recursion(char *s); /* Prints a string*/

void _print_rev_recursion(char *s); /* Prints a string in reverse*/

int _strlen_recursion(char *s); /* This function returns the length of a string*/

int factorial(int n); /* This function returns the factorial of any given number*/

int _pow_recursion(int x, int y); /* This function returns the value of x raised to power of y*/

int _sqrt_recursion(int n); /* This function returns the natural square root of a number*/

int is_prime_number(int n); /* This function returns 1 if the input integer is a prime number, otherwise return 0*/

int is_palindrome(char *s); /* This function returns 1 if a string is a palindrome and 0 if not*/

int wildcmp(char *s1, char *s2); /* This function compares two strings and returns 1 if the strings can be considered identical, otherwise return 0*/

#endif /*MAIN_H*/
