#include "search_algos.h"

  /**
  * jump_search - Performs a jump search for a value in a sorted integer array.
  * @array: Pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: Returns the first index where the value is found.
  *         Returns -1 if the value is not found or if the array is NULL.
  *
  * Description: Prints each value as it is compared during the search.
  *              Uses the square root of the array size as the jump interval.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, interval;

	if (array == NULL || size == 0)
		return (-1);

	interval = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += interval;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
