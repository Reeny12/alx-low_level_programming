#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if a number is positive,zero or negative
 *
 *
 * Return: Always 0 (Success)
 */
itn main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
		for (p = '1'; p <= '9'; p++)
		{
			if (p != d)
			{
				putchar(d);
				putchar(p);
				if  (d == '8' && p == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
}
