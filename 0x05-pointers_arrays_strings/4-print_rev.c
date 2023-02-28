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
	char c[] = *s;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		putchar(c[i]);
	}
	putchar('\n');
}
