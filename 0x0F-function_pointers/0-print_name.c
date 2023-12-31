#include "function_pointers.h"

/**
 * print_name - function with two param
 * description - a pointer pointing to a function
 * @name: name to be printed
 * @f: pointer to a function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
