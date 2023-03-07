#include<string.h>
#include "main.h"
/**
 * _strstr - entry point
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: pointer to char
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
