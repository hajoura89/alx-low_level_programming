#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int num, multiplied, product;
	
	for (num = 0; num <= 9; num++)
	{
		_putchar (48);
        	for (multiplied = 1; multiplied <= 9; multiplied++)
		{
			_putchar (',');
           		_putchar (' ');
            		
			product = num * multiplied;
            		
			if (product <= 9)
                		_putchar (' ');
			else
				_putchar ((product / 10) + 48);

			_putchar ((product % 10) + 48);
		}
		_putchar('\n');
	}
}
