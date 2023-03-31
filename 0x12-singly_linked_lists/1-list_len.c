#include<stdio.h>
#include "lists.h"

/**
 * list_len - entry point
 * @h: pointer to list_h
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	list_t *temp;

	temp = (list_t *)h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);

}
