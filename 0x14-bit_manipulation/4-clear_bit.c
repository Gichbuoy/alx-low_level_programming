#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to the number to change
 * @index: index of the bit to set
 *
 * Return: 1 for success, if error (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
