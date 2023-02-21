#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	
	while (i <= 9)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	i++
	}
}
