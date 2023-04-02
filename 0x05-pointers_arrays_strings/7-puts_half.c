#include "main.h"

/**
 * puts_half - a function that updates a
 * pointer to 98
 * @str: input
 * Return: n
 */

void puts_half(char *str)
{
	int j = 0;
	int i;

	do {
		j++;
	} while (str[j] != '\0');
	if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}
	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
