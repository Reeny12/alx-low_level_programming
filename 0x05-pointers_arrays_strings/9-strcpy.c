#include "main.h"

/**
 * _strcpy - a function that updates a
 * pointer to 98
 * @dest: input
 * @src: input
 * Return: n
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
