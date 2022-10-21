#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0.
 */

int main(void)
{
	long prime = 612852475143, q;

	while (q < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (q = 3; q < (prime / 2); q += 2)
		{
			if ((prime % q) == 0)

				prime /= q;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
