#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * print_sign - Entry point
 * paramenter: int c
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
	printf("+");
	return (1);
	}
	else if (n == 0)
	{
	printf("0");
	return (0);
	}
	else 
	{
	printf("-");
	return (-1);
	}
}
