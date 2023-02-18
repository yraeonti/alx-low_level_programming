#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;

	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	while (alp[i])
	{
	putchar(tolower(alp[i]));
	i++;
	}
	i = 0;
	while (alp[i])
	{
	putchar(alp[i]);
	i++;
	}
	putchar('\n');
	return (0);
}
