#include "main.h"

/**
 * binary_to_uint - the function converts a binary
 * number to unsigned int
 * @bi: a char variable containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *bi)
{
	int i;
	unsigned int value = 0;

	if (!bi)
		return (0);

	for (i = 0; bi[i]; i++)
	{
		if (bi[i] < '0' || bi[i] > '1')
			return (0);
		value = 2 * value + (bi[i] - '0');
	}

	return (value);
}
