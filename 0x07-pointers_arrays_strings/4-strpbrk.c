#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - fill a block of memory with b
 * @s: the adress of memory to be filled
 * @accept: the character to fill the memory with
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != 0; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
