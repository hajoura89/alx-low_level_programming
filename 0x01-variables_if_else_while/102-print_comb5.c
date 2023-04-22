#include <stdio.h>
/**
 *main: Entry Point
 *Description: prints all possible combinations of two two-digit numbers.
 *Return: Always 0 (Success)
*/
int main(void)
{
	int dix;
	int uns;
	int d;
	int u;

	for (dix = '0'; dix <= '9'; dix++)
	{
		for (uns = '0'; uns <= '9'; uns++)
		{
			for (d = dix; d <= '9'; d++)
			{
				for (u = uns + 1; u <= '9'; u++)
				{
					putchar(dix);
					putchar(uns);
					putchar(' ');
					putchar(d);
					putchar(u);

					if (!((dix == '9' && uns == '8') &&
					      (d == '9' && u == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
