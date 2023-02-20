#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	putchar('0' + i);
	putchar('0' + j);
	if (i == 8 && j == 9)
	{
	putchar('\n');
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
