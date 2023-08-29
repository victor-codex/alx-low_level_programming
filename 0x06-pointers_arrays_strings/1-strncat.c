#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: desyination param
 * @src: source param
 * @n: number param
 * Return: dest or 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
