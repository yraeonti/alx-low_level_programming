#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int sizeofarray;

	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	sizeofarray = sizeof(alp) / sizeof(alp[0]);
	i = sizeofarray - 1;
	while (alp[i])
	{
	putchar(tolower(alp[i]));
	i--;
	}
	putchar('\n');
	return (0);
}
