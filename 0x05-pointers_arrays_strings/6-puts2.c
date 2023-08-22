#include "main.h"

/**
 * puts@ - function prints
 * @str: param
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1 ;
	for (o = 0 ; 0 <= t ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
