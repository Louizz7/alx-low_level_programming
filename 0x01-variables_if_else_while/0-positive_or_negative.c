#include <stdlib.h>
#include <time.h>

/**
 * main - entry point 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	strand(time (0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is poitive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else (n < 0)
		printf("%d is positive\n", n);
	return (0);
}
