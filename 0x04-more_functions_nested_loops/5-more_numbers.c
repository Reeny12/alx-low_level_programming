#include <stdio.h>
#include "main.h"

/**
 * more_numbers - checks if a letter is an uppercase
 *
 * Return: 1 for uppercase and 0 for anything else
 */

void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			putchar(a + 'a');
		}
		putchar('\n');
	}
}
