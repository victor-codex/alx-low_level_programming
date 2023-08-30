#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - square root of number
 * @n: num
 * Return: number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square
 * @n: num
 * @i: iterate
 * Return: natural square
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
