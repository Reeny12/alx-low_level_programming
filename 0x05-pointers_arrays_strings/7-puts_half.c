#include "main.h"

/**
 * puts_half - a function that updates a
 * pointer to 98
 * @str: input
 * Return: n
 */

void puts_half(char *str)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
	{
		len++;

		for (index = len - 1; index >= len / 2; index--)
		{
			tmp = s[index];
			s[index] = s[len - index -1];
			s[len - index - 1] = tmp;
		}
	}
}
