#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed
 * to move from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		current = exclusive >> l;
		if (current & 1)
			count++;
	}

	return (count);
}
