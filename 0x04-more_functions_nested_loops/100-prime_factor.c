#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Bwave ICT / Bright Daniel
 * Return: always 0
 */

int main(void)
{
	long i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
