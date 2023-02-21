#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;

	char ch[] = "_putchar\n";
	
	i = 0;
	while(ch[i])
	{
	putchar(ch[i]);
	i++;
	}
	return (0);
}
