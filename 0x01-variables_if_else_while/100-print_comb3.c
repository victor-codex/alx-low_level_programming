#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n, m;

	for (n = 40 ; n <= 56; n++)
	{
		for (m = 49 ; m <= 57 ; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putcahr('\n');
	return (0);
}
