#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer to be printed.
 i*
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int num = n;

	/* first check if it is negative */
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/* print the first few digits */
	if ((num / 10) > 0)
		print_number(num / 10);

	/* print the last digit */
	_putchar((num % 10) + 48);
}
