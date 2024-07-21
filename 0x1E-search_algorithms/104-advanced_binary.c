#include "search_algos.h"

/**
  * advanced_binary_recursive - Recursively searches for a value in a sorted
  *                             array of integers using binary search.
  * @array: Pointer to the first element of the subarray to search.
  * @left: Starting index of the subarray to search.
  * @right: Ending index of the subarray to search.
  * @value: The value to search for.
  *
  * Return: Returns the index where the value is found.
  *         Returns -1 if the value is not found.
  *
  * Description: Prints the current subarray being searched after each update.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}


/**
  * advanced_binary - Performs an advanced binary search for a value in a sorted integer array.
  * @array: Pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: Returns the first index where the value is found.
  *         Returns -1 if the value is not found or if the array is NULL.
  *
  * Description: Prints the current subarray being searched after each update.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
