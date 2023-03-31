#include<stdio.h>
#include "list.h"

/**
 * print_list - entry point
 * @h: pointer to list_h
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t i;
	list_t *temp;

	temp = h;
	while(temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
		}
		printf("[%lu] (%s)\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
