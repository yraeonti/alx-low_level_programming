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

	for (h = 0; h <= 23; h++)
	{
	for (m = 0; m <= 59; m++)
	{
	if (h < 10 && m < 10)
	{
	_putchar('0');
	_putchar('0' + h);
	_putchar(':');
	_putchar('0');
	_putchar('0' + m);
	}
	else if (h < 10  && m >= 10)
	{
	_putchar('0');
	_putchar('0' + h);
	_putchar(':');
	printf("%d", m);
	}
	else if (h >= 10 && m < 10)
	{
	_putchar('0' + h);
	_putchar(':');
	_putchar('0');
	_putchar('0' + m);
	}
	else if (h >= 10 && m >= 10)
	{
	_putchar('0' + h);
	_putchar(':');
	_putchar('0' + m);
	}
	_putchar('\n');
	}
	}
}
