#include "main.h"

/**
 * print_most_numbers - prints the numbers
 *
 * Return: 0 when successful
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0 ; i < 10 ; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
