#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate a string
 * @str: the string to duplicate
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	int i = 1, a;
	char *s;

	if (str == NULL)
	{
		return (0);
	}

	while (s[i] != '\0')
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		s[a] = str[a];
	}
	s[a] = '\0';
	return (s);
}
