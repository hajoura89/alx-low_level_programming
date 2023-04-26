#include "main.h"

/**
* times_table - a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			product = (row * column);
			if ((product / 10) > 0)
			{
				_putchar((product / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((product % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
