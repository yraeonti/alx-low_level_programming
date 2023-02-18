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
	if (alp[i] == 'Q' || 'E')
	{
	;
	}
	else
	{
	putchar(tolower(alp[i]));
	}
	}
	putchar('\n');
	return (0);
}
