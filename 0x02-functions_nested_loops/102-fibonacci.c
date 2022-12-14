#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	unsigned long  f1 = 0, f2 = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (x == 49)
			printf("\n");
		else
			printf(",");
	}

	return (0);
}
