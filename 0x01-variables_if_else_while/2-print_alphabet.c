#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char ch[];
	int i;

	ch = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (ch[i])
	{
	putchar(tolower(ch[i]));
	}
	return (0);
}
