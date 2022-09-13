#include <stdio.h>

#include<ctype.h>

/**
 * main - Entry point
 *
 * Description: Printing the alphabet in lowercase, and then in uppercase
 *
 * Return: returns 0
 *
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
