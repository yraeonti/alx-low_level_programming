#include<string.h>
#include "main.h"
/**
 * _strpbrk - entry point
 * @s: pointer to char
 * @accept: char
 * Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
