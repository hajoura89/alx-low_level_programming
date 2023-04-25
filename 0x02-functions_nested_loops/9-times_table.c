#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int row;
	int column;
	int multiplication;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			multiplication = (row * column);

			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (multiplication <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiplication);
			}
			else if (multiplication > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multiplication));
				_putchar('0' + (multiplication % 10));
			}
		}
		_putchar('\n');
	}
}