#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * print_rev - entry point
 * @s: pointer to char
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
