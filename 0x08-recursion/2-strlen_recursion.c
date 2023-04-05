#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 * Return: the lengthof th string
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s == '\0')
	{
		return (counter);
	}
	counter++;
	counter = counter + _strlen_recursion(s + 1);

	return (counter);
}
