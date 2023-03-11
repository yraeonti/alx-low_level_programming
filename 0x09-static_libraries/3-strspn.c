#include<string.h>
#include "main.h"
/**
 * _strspn - entry point
 * @s: pointer to char
 * @accept: char
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
