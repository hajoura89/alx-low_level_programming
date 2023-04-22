#include <stdio.h>

/**
 *main - Entry Points
 *Description:prints all possible different combinations of three digits.
 *Return: Always 0 (Success)
*/

int main(void)
{
	int un;
	int dix;
	int cent;

	for (cent = '0'; cent <= '9'; cent++) /*hundreds place*/
	{
		for (dix = (cent + 1); dix <= '9'; dix++) /*tens=100s+1*/
		{
			for (un = (dix + 1); un <= '9'; un++) /*ones*/
			{
				putchar(cent);
				putchar(dix);
				putchar(un);
				if (cent != '7' || dix != '8' || un != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
