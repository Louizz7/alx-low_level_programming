#include "lists.h"
void myFunction(void) __attribute__ ((constructor));
/**
 * myFunctiom - executes before main.
 * @void: input.
 * Return: Nothing
 */
void myFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
