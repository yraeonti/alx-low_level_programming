#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * _strcat - entry point
 * @dest: pointer to char
 * @src: pointer to char
 * @n: pointer int
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
