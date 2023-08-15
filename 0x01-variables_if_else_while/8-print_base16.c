#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	return (0);
}
