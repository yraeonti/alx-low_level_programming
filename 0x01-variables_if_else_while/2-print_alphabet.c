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
	return (0);
}
