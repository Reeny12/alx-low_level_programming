#include "main.h"
#include <stddef.h>

/**
 * _strstr - fill a block of memory with b
 * @haystack: the adress of memory to be filled
 * @needle: the character to fill the memory with
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		do {
			a++;
			b++;
		} while(*a == *b && *b != '\0');

		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
