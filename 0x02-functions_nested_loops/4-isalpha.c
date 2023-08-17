#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: parameter
 * Return: 1 when true 0 when false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
