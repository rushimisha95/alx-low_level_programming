#include "main.h"

int natural_sqrt_recursion(int n, int i);

/**
 * *_sqrt_recursion - returns natural square root
 * @n: number to be checked
 *
 * Return: returns the squared root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - finds natural sqrt
 * @n: number to calculate
 * @i: iterator
 *
 * Return: natural square root
 */
int natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqrt_recursion(n, i + 1));
}

