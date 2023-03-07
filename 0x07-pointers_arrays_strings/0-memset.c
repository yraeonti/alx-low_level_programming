#include<string.h>
#include "main.h"
/**
 * _memset - entry point
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
