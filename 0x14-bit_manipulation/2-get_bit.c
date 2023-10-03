#include "main.h"

/**
 * get_bit - the function returns the value of a bit at an
 * index in a decimal number
 * @deci_n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int deci_n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (deci_n >> index) & 1;

	return (bit_value);
}
