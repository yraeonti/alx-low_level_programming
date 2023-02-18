#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char ch[26];

	ch = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	putchar(tolower(ch));
	return (0);
}
