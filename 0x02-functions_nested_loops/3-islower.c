#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * _islower - Entry point
 * Return: int
 */

int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
