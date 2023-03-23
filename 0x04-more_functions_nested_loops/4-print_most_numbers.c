#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - checks if a letter is an uppercase
 *
 * Return: 1 for uppercase and 0 for anything else
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			putchar(x + '0');
		}
	}
	putchar('\n');
}
