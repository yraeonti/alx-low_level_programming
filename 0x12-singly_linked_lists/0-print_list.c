#include<stdio.h>
#include "lists.h"

/**
 * print_list - entry point
 * @h: pointer to list_h
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t i;
	list_t *temp;

	i = 0;
	temp = (list_t *)h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			i++;
		}
		else
		{
		printf("[%u] (%s)\n", temp->len, temp->str);
		temp = temp->next;
		i++;
		}
	}
	return (i);
}
