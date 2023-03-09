#include<math.h>
#include "main.h"
/**
 * _pow_recursion - entry point
 * @x: int
 * @y: int
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	return (pow(x, y));	
}
