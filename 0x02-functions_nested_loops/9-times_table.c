#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: int
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 9; h++)
	{
	for (m = 0; m <= 9; m++)
	{
	printf("%i * %i", h, m);
	_putchar(' ');
	_putchar(',');
	_putchar('\n');
	}
	}
}
