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
	if (alp[i] == 'Q' || alp[i] == 'E')
	{
	;
	}
	else
	{
	putchar(tolower(alp[i]));
	}
	i++;
	}
	putchar('\n');
	return (0);
}
