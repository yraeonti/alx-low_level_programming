#include<string.h>
#include "main.h"
/**
 * print_chessboard - entry point
 * @a: two dimentional array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int j, i;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	_putchar(a[i][j]);
	}
	_putchar('\n');
	}
}
