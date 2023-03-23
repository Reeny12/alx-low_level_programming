#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * print_number - checks if a letter is an uppercase
 * @n: number to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	putchar('-');
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	putchar((unsigned int) n % 10 + '0');
}
