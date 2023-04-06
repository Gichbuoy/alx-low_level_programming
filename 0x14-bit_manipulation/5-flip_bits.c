#include "main.h"
/**
 * flip_bits - returns number of bits to flip to get one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63 ; j >= 0 ; j++)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}
	return (count);
}
