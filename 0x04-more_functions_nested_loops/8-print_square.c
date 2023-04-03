#include <stdio.h>
#include "main.h"

/**
 * print_square - checks if a letter is an uppercase
 * @size: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}
