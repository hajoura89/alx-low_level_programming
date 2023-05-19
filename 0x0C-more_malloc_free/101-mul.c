#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiplies two numbers
 * @num1: number1
 * @num2: number2
 * Return: multiplication
*/
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * isNumber - checks if a string contains a non-digit char
 * @str: string
 * Return: 0 if a non-digit is found, 1 otherwise
*/
int isNumber(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
			str++;
	}
	return (1);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!isNumber(argv[1]) || !isNumber(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}
