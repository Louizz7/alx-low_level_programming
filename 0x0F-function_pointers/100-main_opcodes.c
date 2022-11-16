#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the opcodes of its own main function.
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: on success, 1 or 2 in case of failure
 */

int main(int argc, char *argv[])

{
	char *opc = (char *) main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);

		if (i != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
