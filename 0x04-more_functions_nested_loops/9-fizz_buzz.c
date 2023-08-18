#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
			printf("fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("fizzBuzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
