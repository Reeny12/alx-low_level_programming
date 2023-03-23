#include <stdio>
#include "main.h"

/**
 * _isupper - checks if a letter is an uppercase
 * @c: letter to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
