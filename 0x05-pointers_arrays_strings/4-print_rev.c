#include "main.h"

/**
 * print_rev - a function that updates a
 * pointer to 98
 * @s: input
 * Return: s
 */

void print_rev(char *s)
{
	int count = 0;
	int o;

	do {
		counti++;
		s++;
	} while (*s != '\0');
	s--;
	for (o = count; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
