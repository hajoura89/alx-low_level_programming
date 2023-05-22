#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: int
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}