#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - entry point
 * @head: pointer to list_t
 * Return: void
 */

void *free_list(list_t *head)
{
	if (*head != NULL)
	{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
	}
}
