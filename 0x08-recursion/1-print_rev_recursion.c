#include<stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - entry point
 * @s: pointer to char
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	;
	}
	_print_rev_recursion(s++);
}
