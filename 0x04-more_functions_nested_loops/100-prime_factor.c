#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int x = 612852475143;
	long int p;

	for (p = 2; p < x; p++)
	{
		if (x % p == 0)
		{
			x = x / p;
		}
	}
	printf("%ld\n", p);
	return (0);
}
