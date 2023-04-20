#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  print_all - ...
 *  @format: ...
 *  Return: ...
 */

void print_all(const char * const format, ...)
{
	va_list lis;
	unsigned int i = 0, j = 0, k = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(lis, format);
	while (format && format[i])
	{
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lis, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(lis, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(lis, double)), k = 1;
				break;
			case 's':
				str = va_arg(lis, char *), k = 1;
				if (!str)
				{
					printf("(nill)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(lis);
}
