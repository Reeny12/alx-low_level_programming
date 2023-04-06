#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: input
 * @s2: input
 * Return: 1 if identical and 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	char *a = s1 + 1;
	char *b = s2 + 1;

	if (*s1 == '\0' && *s2 != '\0' && *s2 == 42)
	{
		return (wildcmp(s1, b));
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(a, b));
	}
	else if (*s2 == 42)
	{
		return (wildcmp(s1, b) || wildcmp(a, s2));
	}
	else
	{
		return (0);
	}
}
