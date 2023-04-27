#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * print for multiples of 3 Fizz instead of the number
 * print for multiples of 5 Buzz instead of the number
 * for 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char t[] = "Fizz";
	char f[] = "Buzz";
	char tf[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", f);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", tf);
		else if (i % 3 == 0)
			printf("%s ", t);
		else if (i % 5 == 0)
			printf("%s ", f);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
