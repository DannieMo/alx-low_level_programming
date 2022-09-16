#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * @num
 *
 * Return: no return.
 */

void print_numbers(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}
