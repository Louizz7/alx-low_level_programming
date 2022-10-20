#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void);
{
	int x;
	unsigned long f1 = 0, f2 = 1, sum;

	for (x = 0, x < 98, x++)
	{
		sum = f1 +f2;
		printf("%lu", sum)

		f1 = f2;
		f2 = sum;

		if (x == 97)
			printf("\n")

		else 
			printf(",")
	}

	return (0);
}

