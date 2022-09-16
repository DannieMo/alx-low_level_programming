#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 *
 * Return: no return.
 */

void print_line(int n)
{
	int i;

	if (n < 0)
	{
		putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			putchar('_');
			i++;
		}
		putchar('\n');
	}
}


