#include "main.h"

/**
 * swap_int - integers to be swapped
 * @a: first integer
 * @b: second integers
 * Return: 0
 */
void swap_int(int *a, int *b)

{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
