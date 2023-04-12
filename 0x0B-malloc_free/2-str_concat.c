#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, k, l = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 == "";
	}
	else if (s2 == NULL)
	{
		s2 == "";
	}

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	l = a + b;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	b = 0;

	for (k = 0; k < l; k++)
	{
		if (k <= a)
			s[k] = s1[k];
		else if (k >= a)
			s[k] = s2[b];
			b++;
	}
	s[k] = '\0';
	return (s);
}
