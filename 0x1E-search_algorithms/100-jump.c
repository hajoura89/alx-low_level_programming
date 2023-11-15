#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the jmp search algorithm
 * @array: the array
 * @size: size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jmp, j, index;

	jmp = (size_t)sqrt(size);
	if (!array)
		return (-1);
	for (index = 0; index < size; index += jmp)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index]
				|| ((index + jmp >= size)
					|| (value == array[index + jmp]))
				|| (value > array[index] && value < array[index + jmp]))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					index, index + jmp);
			for (j = index; j < size && j <= index + jmp; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}

