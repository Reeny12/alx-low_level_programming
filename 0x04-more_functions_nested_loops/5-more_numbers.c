#include <stdio.h>
#include "main.h"

/**
 * more_numbers - checks if a letter is an uppercase
 *
 * Return: 1 for uppercase and 0 for anything else
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	putchar((y / 10) + '0');
	}
	putchar((y % 10) + '0');
	}
	putchar('\n');
	}
}
