#include<string.h>
#include "main.h"
/**
 * print_chessboard - entry point
 * @b: 2-dimentional array
 * Return: void
 */
void print_chessboard(char b(*a)[8])
{
	int j, i;

	while (a++)
	{
	for (j = 0; j < strlen(a); j++)
	{
	_putchar(b[i][j]);
	}
	_putchar('\n');
	i++
	}
}
