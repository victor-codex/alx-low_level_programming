#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - input integer
 * @n: param
 * Return: 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check prime
 * @n: number
 * @i: iterate
 * Return: 1
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
