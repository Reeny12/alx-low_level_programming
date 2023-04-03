#include <stdio.h>
#include "main.h"

/**
 * print_line - checks if a letter is an uppercase
 * @n: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

void print_line(int n)
{
	int x = 0;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	while (x < n)
	{
	putchar('_');
	x++;
	}
	putchar('\n');
	}
}
