#include "main.h"

/**
 * puts2 - a function that updates a
 * pointer to 98
 * @str: input
 * Return: n
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	do {
		j++;
	} while (str[j] != '\0');
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
