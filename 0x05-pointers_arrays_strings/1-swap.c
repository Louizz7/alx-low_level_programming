#include "main.h"
#include <stdio.h>

 /**
  * swap_int - swaps the values of two integers.
  * @a: first integer
  * @b: second integer
  */

void swap_int(int *i, int *j)
{
	int tmp = *i;

	*i = *j;
	*j = tmp;
}
