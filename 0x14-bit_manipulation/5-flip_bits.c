#include "main.h"

/**
 * flip_bits - Write a function that returns the number of
 * bits you would need to flip to get from one number to another
 *
 * @n: the number value
 * @m: the number value
 *
 * Return: an unsigned integer value
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int ex;

	ex = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		current = ex >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
