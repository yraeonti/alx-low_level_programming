#include<stdio.h>
#include "main.h"

/**
 * print_line - entry point
 * @n: int
 * Return: void
 */
void print_line(int n)
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
	_putchar('_');
	}
	}
	_putchar('\n');
}
