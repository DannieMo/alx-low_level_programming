#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that computes and prints the sum
 * of all the multiples of 3 or 5 and below 1024
 *
 * Retun: Always 0(Success)
 *
 */

int main(void)
{
	int i;
	int sum = 0;

	i = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
