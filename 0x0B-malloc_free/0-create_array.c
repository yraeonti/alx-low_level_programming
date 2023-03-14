#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - entry point
 * @size: int
 * @c: char
 * Return: pointer or null
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
	{
		return ('\0');
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return ('\0');
	}
	s[0] = c;
	return (s);
}

