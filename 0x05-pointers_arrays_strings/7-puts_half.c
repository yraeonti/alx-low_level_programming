#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * puts_half - entry point
 * @str: pointer to char
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	size_t q = strlen(str);
	
	if (q % 2 != 0)
	{
	n = (q - 1) / 2;
	}
	else
	{
	n = q / 2;
	}
	for (int j = n; j < q; j++)
	{
	printf("%c", str[j]);
	}
	putchar('\n');
}
