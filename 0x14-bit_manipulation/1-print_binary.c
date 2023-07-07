#include "main.h"

/*
 * print_binary - Write a function that prints the binary representation of a number
 * @n: where n is pointing to a string
 *
 * Return: the converted number
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int c;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;
		if (c & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
	
