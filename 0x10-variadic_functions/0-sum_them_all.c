#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - ...
 * @n: ...
 * @...: ...
 * Return: ...
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0, sum = 0;

	va_start(x, n);

	for (; i < n; i++)
	{
		sum += va_arg(x, int);
	}

	va_end(x);

	return (sum);
}	
