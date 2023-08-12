#include <stdio.h>

/**
 * main - This program print alphabets reversely
 * Description - This program displays reverse alphabets
 * Return: 0
 */

int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}

