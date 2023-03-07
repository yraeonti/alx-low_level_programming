#include<stdio.h>
#include "main.h"
/**
 * print_diagsums - entry point
 * @a: two dimentional array
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	long int leftSum, rightSum;
	int i, j;

	leftSum = *a;
	rightSum = *(a + (size - 1));
	for (i = 2, j = 0; i <= size; i++)
	{
	j += size + 1;
	leftSum += *(a + j);
	}
	for (i = 2, j = size - 1; i <= size; i++)
	{
	j += size - 1;
	rightSum += *(a + j);
	}

	printf("%li, %li\n", leftSum, rightSum);
}
