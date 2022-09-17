#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line n times.
 * @n: times straight line is printed.
 *
 * Return: no return.
 */

void print_diagonal(int n)
{
	int i;


	i = 0;
	while (i < n)
	{
		int i;
		int j;

		i = 0;
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (i < (n - 1))
			{
				putchar('\n');
			}

			i++;
		}
		putchar('\n');
	}
}
