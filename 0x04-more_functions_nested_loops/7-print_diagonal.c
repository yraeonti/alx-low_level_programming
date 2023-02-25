#include<stdio.h>
#include "main.h"

/**
 * print_diagonal - entry point
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
	;
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar('\\');
	}
	}
	_putchar('\n');
}
