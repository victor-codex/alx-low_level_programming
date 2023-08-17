#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: 0 when successful
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
