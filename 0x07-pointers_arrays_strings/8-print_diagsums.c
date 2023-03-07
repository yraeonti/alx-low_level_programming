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
	int i, j;
	long int leftSum, rightSum;

	leftSum = 0;
	rightSum = 0;

	for (i = 0, j = 0; i < size && j < size; i++, j++)
	{
	leftSum += a[i][j];
	}
	for (i = 0, j = (size - 1); i < size && j > 0; i++, j--)
	{
	rightSum += a[i][j];
	}
	printf("%li, %li", leftSum, rigtSum);
}
