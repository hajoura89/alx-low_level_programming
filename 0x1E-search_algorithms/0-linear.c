#include "search_algos.h"

/**
 * linear_search - Function to searche for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to search for
 * Return: the first index where value is located
 * or -1 if it doesnt exist, or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
