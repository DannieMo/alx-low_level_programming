#include <stdio.h>

/**
 * main - main block
 *
 * Description: using "putchar"to print the alphabet in lower case
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
