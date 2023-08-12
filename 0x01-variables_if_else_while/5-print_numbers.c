#include <stdio.h>

/**
 * main - This program displays numbers
 * Description - This program print numbers
 * Return: 0
 */

int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
