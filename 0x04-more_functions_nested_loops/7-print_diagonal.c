#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - checks if a letter is an uppercase
 * @n: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	putchar(32);
	}
	putchar(92);
	putchar('\n');
	}
	}
}
