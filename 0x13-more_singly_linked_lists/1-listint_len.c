#include<stdio.h>
#include<stddef.h>
#include "lists.h"
/**
 * listint_len - entry point
 * @h: pointer to listint_t
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
