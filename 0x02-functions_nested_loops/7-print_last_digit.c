#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: int
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
