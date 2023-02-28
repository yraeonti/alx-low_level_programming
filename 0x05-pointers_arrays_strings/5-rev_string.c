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
	*s = strrev(s);
}
