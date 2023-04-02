#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if a number is positive,zero or negative
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, q;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (q = b + 1; q <= '9'; q++)
			{
				if ((b != a) != q)
				putchar(a);
				putchar(p);
				putchar(q);
				if  (a == '7' && b == '8')
				continue;
				putchar('44');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
