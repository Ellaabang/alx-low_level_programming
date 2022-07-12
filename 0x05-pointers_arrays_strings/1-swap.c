#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: first integer
 * @b: second integer
 * Description: swap_int swaps the value of *a and *b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
