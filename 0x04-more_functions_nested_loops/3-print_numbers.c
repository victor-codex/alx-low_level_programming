#include "main.h"

/**
 * print_numbers - prints the numbers
 *
 * Return: 0 when successful;
 */

void print_numbers(void)
{
	char i;

	for (i = 0 ; i < 10 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
