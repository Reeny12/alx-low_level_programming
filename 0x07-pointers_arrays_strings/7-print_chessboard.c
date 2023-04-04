#include "main.h"

/**
 * print_chessboard - fill a block of memory with b
 * @a: the adress of memory to be filled
 * Return: s
 */

void print_chessboard(char (*a)[8])
{
	int v = 0, n;

	while (v < 8)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[v][n]);
		}
		_putchar ('\n');
	v++;
	}
}
