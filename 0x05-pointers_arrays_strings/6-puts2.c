#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * puts2 - entry point
 * @str: pointer to char
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		putchar(s[i]);
	}
	putchar('\n');
}
