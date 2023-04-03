#include "main.h"

/**
 * _strpbrk - fill a block of memory with b
 * @s: the adress of memory to be filled
 * @accept: the character to fill the memory with
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;

	while (*s)
	{
		for (; accept[a]; a++)
		{
			if (*s == accept[a])
			return (s);
		}
	s++;
	}
	return ('\0');
}
