#include "main.h"

/**
 * set_bit - this function sets a bit at a given index to 1
 * @deci_n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *deci_n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*deci_n = ((1UL << index) | *deci_n);
	return (1);
}
