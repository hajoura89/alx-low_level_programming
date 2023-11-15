#include "search_algos.h"

/**
 * _recursive - Searches recursively for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: the array of integers
 * @first: first index of the array
 * @last: last index of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int _recursive(int *array, size_t first, size_t last, int value)
{
	size_t half;
	int x;

	if (!array || last < first)
		return (-1);
	printf("Searching in array: ");
	for (half = first; half <= last; half++)
	{
		if (half != first)
			printf(", ");
		printf("%d", array[half]);
	}
	printf("\n");
	half = (first + last) / 2;
	if (array[half] == value)
		return (half);
	else if (array[half] > value)
		x = (_recursive(array, first, half - 1, value));
	else if (array[half] < value)
		x = (_recursive(array, half + 1, last, value));
	return (x);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (_recursive(array, 0, size - 1, value));
}
