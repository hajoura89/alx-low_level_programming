#include <stdio.h>

/**
 *main - Entry Point
 *Description: prints all possible different combinations of two digits.
 *Return: Always 0 (Success)
*/

int main(void)
{
	int uns;
	int dixs;

	for (dixs = '0'; dixs <= '9'; dixs++)
	{
		for (uns = (dixs + 1); uns <= '9'; uns++)
		{
			putchar(dixs);
			putchar(uns);

			if (dixs != '8' || uns != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
