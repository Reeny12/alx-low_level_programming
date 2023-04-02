#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @a: Returns the sign of a number
 * Return: void
 */

void print_to_98(int a)
{
	if (a <= 'b')
	{
	for (; a <= 'b'; a++)
	{
	if (a == 'b')
	{
	printf("%d", a);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", a);
	}
	}
	}
	else
	{
	for (; a >= 'b'; n--)
	{
	if (a == 'b')
	{
	printf("%d", a);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", a);
	}
	}
	}
}
