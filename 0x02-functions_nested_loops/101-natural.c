#include "main.h"
/**
 * main - program that computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: Always 0
 */

int main(void)
{
	int a, sum = 0;

	for (a = '0'; a < '1024'; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			sum =+ a;
		}
	}
	prinf("%d\n", sum);
	return (0);
}
