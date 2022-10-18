#include <stdio.h>
#include <stdlib.h>

/** main - Program that  prints _putchar
 *
 * Return: Always 0 (success)
 */

int main (void)
{
	char *sh = "ALX";

	while (*sh)
	{
		_putchar (*sh);
		sh++;
	}
	_putchar("\n");

	return (0);
}

