#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int digitone = 0, digittwo;

	while (digitone <= 99)
	{
		digittwo = digitone;
		while (digittwo <= 99)
		{
			if (digittwo != digitone)
			{
				putchar((digitone / 10) + 48);
				putchar((digitone % 10) + 48);
				putchar(' ');
				putchar((digittwo / 10) + 48);
				putchar((digittwo % 10) + 48);
				if (digitone != 98 || digittwo != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digittwo++;
		}
		digitone++;
	}
	putchar('\n');
	return (0);
}
