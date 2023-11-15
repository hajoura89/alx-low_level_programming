#include "search_algos.h"

/**
 * binary_recursive - Searches recursively for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: the array of integers
 * @first: first index of the array
 * @last: last index of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int binary_recursive(int *array, size_t first, size_t last, int value)
{
	size_t md;
	int x;

	if (!array || (int)last < (int)first)
		return (-1);
	printf("Searching in array: ");
	for (md = first; md <= last; md++)
	{
		if (md != first)
			printf(", ");
		printf("%d", array[md]);
	}
	printf("\n");
	md = (first + last) / 2;
	if (array[first] == value && array[md] == value)
		return (first);
	else if (array[md] == value)
		x = binary_recursive(array, first, md, value);
	else if (array[md] > value)
		x = (binary_recursive(array, first, md - 1, value));
	else if (array[md] < value)
		x = (binary_recursive(array, md + 1, last, value));
	return (x);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
