#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: void
 */

void times_table(void)
{
	int h;
	int m;
	int mul;

	for (h = 0; h <= 9; h++)
	{
	for (m = 0; m <= 9; m++)
	{
	mul = h * m;
	
	if (mul < 10)
	{
	_putchar('0' + mul);
	}
	else if (mul >= 10)
	{
	_putchar((mul / 10) + '0');
	_putchar((mul % 10) + '0');
	}
	_putchar(' ');
	_putchar(',');
	_putchar('\n');
	}
	}
}
