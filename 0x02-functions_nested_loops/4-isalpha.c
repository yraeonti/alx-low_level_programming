#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * paramenter: int c
 * Return: int
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
