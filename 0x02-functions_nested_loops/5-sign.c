#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * print_sign - Entry point
 * @n: int
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
	putchar("+");
	return (1);
	}
	else if (n == 0)
	{
	putchar("0");
	return (0);
	}
	else 
	{
	putchar("-");
	return (-1);
	}
}
