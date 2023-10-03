#include "main.h"

/**
 * clear_bit - the funtion sets the value of a given bit to 0
 * @deci_n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *deci_n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*deci_n = (~(1UL << index) & *deci_n);
	return (1);
}
