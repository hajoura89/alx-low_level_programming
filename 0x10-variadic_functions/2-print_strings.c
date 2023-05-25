#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *s;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (!s)
			s = "(nil)";
		if (!separator || (separator && i == 0))
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	printf("\n");

	va_end(list);
}
