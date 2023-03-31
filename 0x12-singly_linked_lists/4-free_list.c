#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - entry point
 * Return: void
 */

void *free_list(list_t *head)
{
	if (*head != NULL)
	{
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	}
}
