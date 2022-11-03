#include "main.h"

int is_prime(int, int);
/**
 * is_prime_number - returns true if the number is prime
 * @n: input number
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime - checks if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime(int n, int c)

{
	if (n <= 1)
		return (0);
	if (n % c == 0 && c > 1)
		return (0);
	if ((n / c) < c)
		return (1);
	return (is_prime(n, c + 1));
}
