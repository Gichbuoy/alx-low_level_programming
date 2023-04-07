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
	unsigned int j, count = 0;
	unsigned long int k = sizeof(unsigned long int) * 8;

	for (j = 0 ; j < k ; j++)
	{
		if ((m & 1) != (n & 1))
			count += 1;
		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}
