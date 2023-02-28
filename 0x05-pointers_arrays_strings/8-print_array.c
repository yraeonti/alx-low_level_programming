#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * print_array - entry point
 * @a: pointer to int
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{	
	printf("%d", a[i]);
	if (i == (n - 1))
	{
	break;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
}
