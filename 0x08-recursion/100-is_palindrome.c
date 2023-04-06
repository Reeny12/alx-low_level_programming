#include "main.h"

/**
 * checker - compares each character of the string
 * @s: string t compare
 * @x: smallest iterator
 * @y: biggest iterator
 * Return: a palindrome
 */

int checker(*s)
{
	int x, y;

	int a = s + x;
	int b = s + y;

	if (*a == *b)
	{
		if (x == y || x == y + 1)
		{
			return(1);
		}
		else
		{
			return (0 + checker(s, x + 1, y - 2));
		}
	}
	else
	{
		return (0);
	}
}
