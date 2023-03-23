#include <stdio.h>
#include "main.h"

/**
 * print_triangle - checks if a letter is an uppercase
 * @size: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
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
	}
	}
}
