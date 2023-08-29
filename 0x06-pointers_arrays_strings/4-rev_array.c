#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: pama
 * @n: number
 * Return: content
 */

void reverse_array(int *a, int n)
{
	int rev, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		rev = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = rev;
	}
}
