#include "search_algos.h"

/**
 * binary_recursive_ - Searches recursively for a value
 * in a sorted array of integers
 * using the Binary search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int binary_recursive_(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (binary_recursive_(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (binary_recursive_(array, half + 1, value));

	half++;
	return (binary_recursive_(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to binary_recursive_ to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = binary_recursive_(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
