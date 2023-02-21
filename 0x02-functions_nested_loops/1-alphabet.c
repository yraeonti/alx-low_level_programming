#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * main - Entry point
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
}
