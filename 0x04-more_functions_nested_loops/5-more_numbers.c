#include<stdio.h>
#include "main.h"

/**
 * more_numbers - entry point
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 15; j++)
	{
	putchar('0' + j);
	}
	putchar('\n');
	}
}
