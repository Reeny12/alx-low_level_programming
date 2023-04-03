#include <stdio.h>
#include "main.h"

/**
 * print_triangle - checks if a letter is an uppercase
 * @size: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

void print_triangle(int size)
{
	int y, z;
	int x = 0;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	while (x < size)
	{
	for (y = size - x; y > 1; y--)
	{
	putchar(32);
	}
	for (z = 0; z <= x; z++)
	{
	putchar(35);
	}
	putchar('\n');
	x++;
	}
	}
}
