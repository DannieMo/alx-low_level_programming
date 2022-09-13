#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description : prints the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num_of_n = n % 10;
	if (last_num_of_n > 5)
	{
		printf("last digit of %d is %d greater than 5\n", n, last_num_of_n);
	}
	else if (last_num_of_n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last_num_of_n);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_num_of_n);
	}
	return (0);

}
