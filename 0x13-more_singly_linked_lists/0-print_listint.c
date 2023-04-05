#include<stdio.h>
#include<stddef.h>
#include "lists.h"
/**
 * print_listint - entry point
 * @h: pointer to listint_t
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t size;
	listint_t *temp = (listint_t *)h;
	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			element++;
		}
	}
	return (size);
}
