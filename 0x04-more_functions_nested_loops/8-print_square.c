#include <stdio.h>
#include "main.h"

/**
 * print_square - checks if a letter is an uppercase
 * @size: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	putchar('#');
	}
	putchar('\n');
	}
	}
}
