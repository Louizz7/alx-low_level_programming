#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers
 * @a:the first number
 * @b:the second number
 * Return:The sum of a and b
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers
 * @a:the first number
 * @b:the second number
 * Return: difference.
 */

int op_sub(int a, int b)

{
		return (a - b);
}

/**
 * op_mul - Returns the multiplication of two numbers
 * @a:the first number
 * @b:the second number
 * Return: The multiplication of a and b
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a:the first number
 * @b:the second number
 * Return: division
 */

int op_div(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a:the first numbr
 * @b:the second number
 * Return: The remainder of the division of a by b
 */

int op_mod(int a, int b)

{
	return (a % b);
}
