#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/* more headers goes there */

/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%i is positive ", n);
	}
	else if (n == 0)
	{
	printf("0 is zero ");
	}
	else if (n < 0)
	{
	printf("%i is negative ", n);
	}
	return (0);
}
