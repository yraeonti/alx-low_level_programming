#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * _strncpy - entry point
 * @dest: pointer to char
 * @src: pointer to char
 * @n: pointer int
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
