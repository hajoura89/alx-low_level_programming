#include "main.h"
/**
 * print_number - print an integer,
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int te, di, po = n;
	double t_b = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			po = n * -1;
			_putchar('-');
		}

		while (t_b <= po)
			t_b *= 10;
		te = t_b / 10;

		while (te >= 1)
		{
			di = po / te;
			_putchar(di + '0');
			po = (po - (te * di));
			te /= 10;
		}
	}
}
