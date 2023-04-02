#include "main.h"

/**
 * string_toupper - concatenates two strings
 * @n: input
 * Return: dest
 */

char *string_toupper(char *n)
{
	int i = 0;

	do {
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
		i++;
	} while (n[i] != '\0');
	return (n);
}
