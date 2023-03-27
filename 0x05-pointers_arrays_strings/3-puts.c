#include "main.h"

/**
 * _puts - a function that updates
 * @str: input
 * Return: n
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
