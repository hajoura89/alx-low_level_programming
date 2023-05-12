#include <stdlib.h>
#include<stdio.h>


/**
 * main - a program that multiplies two numbers
 * @argc: int
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mult);

	return (0);
}
