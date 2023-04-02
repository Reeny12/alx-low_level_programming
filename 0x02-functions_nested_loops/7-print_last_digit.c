#include "main.h"

/**
 * print_last_digit - entry point
 * @n: Returns the sign of a number
 * Return: 1 , 0 or -1
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if  (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + 48);
	return (l);
}
