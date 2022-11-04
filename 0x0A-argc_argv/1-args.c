#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - Print the number of arguments passed
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 on success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])

{
	printf("%d\n", argc - 1);

	return (0);

}
