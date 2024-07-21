#include "search_algos.h"

  /**
    * linear_search - Performs a linear search for a value in an integer array.
    * @array: Pointer to the first element of the array to search.
    * @size: The number of elements in the array.
    * @value: The value to search for.
    *
    * Return: Returns the first index where the value is found.
    *         Returns -1 if the value is not found or if the array is NULL.
    *
    * Description: Prints each value as it is compared during the search.
    */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
