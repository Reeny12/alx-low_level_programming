#include <stdio.h>
#include "main.h"

/**
 * print_numbers - checks if a letter is an uppercase
 * Return: 1 for uppercase and 0 for anything else
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
