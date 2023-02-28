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
	size_t n;
	size_t i;
	size_t q = strlen(str);

	if (q % 2 == 0)
	{
	n = (q / 2);
	}
	else
	{
	n = (q - 1) / 2;
	}
	for (i = n - 1; i < q; i++)
	{
	printf("%c", str[i]);
	}
	putchar('\n');
}
