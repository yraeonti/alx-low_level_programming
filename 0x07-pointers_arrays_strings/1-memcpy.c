#include<string.h>
#include "main.h"
/**
 * _memcpy - entry point
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: pointer to char
 */
char *_memcpy(char *s, char b, unsigned int n)
{
	return (memcpy(s, b, n));
}
