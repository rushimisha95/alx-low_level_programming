#include "main.h"

int determine_prime_number(int n, int i);

/**
 * is_prime_number - returns a prime number
 * @n: number to be checked
 *
 * Return: prime value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (determine_prime_number(n, n - 1));
}

/**
 * determine_prime_number - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int determine_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (determine_prime_number(n, i - 1));
}

