#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * rev_string - entry point
 * @s: pointer to char
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i <= 0; i--)
	{
		*(s + ((strlen(s) - 1) - i)) = s[i];
	}
}
