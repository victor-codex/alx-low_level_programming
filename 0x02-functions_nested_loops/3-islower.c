#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: parameter to be checked
 * Return: 1 if true and 0 when false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
