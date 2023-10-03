#include "main.h"

/**
 * print_binary - a function that prints the binary equivalent of a
 * decimal number without any return value
 * @deci_n: number to print in binary
 */

void print_binary(unsigned long int deci_n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = deci_n >> i;

		if (current & 1)
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
