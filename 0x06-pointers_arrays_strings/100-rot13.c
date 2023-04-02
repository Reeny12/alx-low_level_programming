#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int b;

	char sample[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < '4'; b++)
		{
			if (s[a] == sample[b])
			{
				s[a] = data[b];
				break;
			}
		}
	}
	return (s);
}

