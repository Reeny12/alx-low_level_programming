#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 * Return: ...
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (; j < l; j++)
	{i
		if (j <= l)
			str[j] = s1[j];
		if (j >= l)
		{
			str[j] = s2[k];
			k++;
		}
	}
	str[j] = '\0';
	return (str);
}

