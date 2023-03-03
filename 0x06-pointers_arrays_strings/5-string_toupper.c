#include<ctype.h>
#include "main.h"
/**
 * string_toupper - Entry point
 * @a: integer array to be reversed
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
	a[i] = toupper(a[i]);
	}
	return (a);
}
