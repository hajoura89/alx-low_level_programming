#include "main.h"

/**
* times_table - a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int num, multiplied, product;

	for (num = 0; num < 10; num++)
	{
		for (multiplied = 0; multiplied < 10; multiplied++)
		{
			product = num * multiplied;
			if (product < 10)
			{
				if (multiplied != 0)
				{
					_putchar (' ');
					_putchar (' ');
				}
				_putchar (product + '0');
			}
			else
			{
				_putchar ((product / 10) + '0');
				_putchar ((product % 10) + '0');
			}
			if (multiplied != 9)
				_putchar (',');
		}
		_putchar('\n');
	}
}
