#include "main.h"

/**
 * print_name - entry point
 * @name: pointer to char
 * @f: pointer to function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
