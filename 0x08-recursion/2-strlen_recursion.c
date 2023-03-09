#include<string.h>
#include "main.h"
/**
 * _strlen_recursion - entry point
 * @s: pointer to char
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
	return (i);
	}
	i++;
	_strlen_recursion(s + 1);
	return (i)
}
