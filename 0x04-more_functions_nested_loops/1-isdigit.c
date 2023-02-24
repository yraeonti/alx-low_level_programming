#include<ctype.h>
#include "main.h"

/**
 * _isdigit - entry point
 * @c: int
 * Return: int
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
