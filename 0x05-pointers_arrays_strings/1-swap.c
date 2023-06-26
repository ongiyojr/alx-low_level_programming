#include <stdio.h>

/**
 * swap_int - Entry point
 * @a: The first integer
 * @b: the second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
