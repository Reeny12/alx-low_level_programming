#include <stdio.h>
#include "main.h"

/**
 * print_line - checks if a letter is an uppercase
 * @n: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	putchar('_');
	}
	putchar('\n');
	}
}
