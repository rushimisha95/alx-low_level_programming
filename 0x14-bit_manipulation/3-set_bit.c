#include "main.h"

/**
 * set_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: 1 (success) or -1(faillure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
		return (-1);

	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
