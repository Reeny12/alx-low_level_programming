#include <stdio.h>
#include "main.h"

/**
 * print_numbers - checks if a letter is an uppercase
 * Return: 1 for uppercase and 0 for anything else
 */

void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
}
