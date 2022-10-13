#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integertype;
	long int longtype;
	long long int longlongtype;
	char chartype;
	float floattype;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(chartype));
	printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(integertype));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longtype));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longlongtype));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(floattype));
	return (0);
}
