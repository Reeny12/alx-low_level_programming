#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - ...
 * @separator: ...
 * @n: ...
 * Return: ...
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	unsigned int i = 0;
	char *str;

	va_start(lis, n);
	for (; i < n; i++)
	{
		str = va_arg(lis, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
			printf("(nill)");
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lis);
}
