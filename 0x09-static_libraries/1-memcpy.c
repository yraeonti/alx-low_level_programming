#include<string.h>
#include "main.h"
/**
 * _memcpy - entry point
 * @dest: pointer to char
 * @src: pointer to char
 * @n: unsigned int
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
