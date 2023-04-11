#include <stdio.h>
#include "main.h"

/**
 * create_array - create an array of size size and
 * assign char c
 * @size: size of an array
 * @c: input
 * Return: pointer to array,Null if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a = 0;

	str = malloc(sizeof(char) * size);
	if (size == 0 || size == NULL)
	{
		return (NULL);
	}
	while (a < size)
	{
		str[a] = c;
		a++;
	}
	return (str);
}
