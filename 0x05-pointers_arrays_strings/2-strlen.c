#include "main.h"

/**
 * _strlen - a function that updates
 * @s: input
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
