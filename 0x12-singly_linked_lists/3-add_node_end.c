#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - entry point
 * @head: pointer to pointer to list_h
 * @str: pointer to char
 * Return: list_t or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *firstNode;
	list_t *temp;

	if (*head == NULL)
	{
		firstNode = malloc(sizeof(list_t));
		if (firstNode == NULL)
		{
			return (NULL);
		}
		(*firstNode).str = strdup(str);
		(*firstNode).len = strlen(str);
		(*firstNode).next = NULL;
		*head = firstNode;
		return (*head);
	}
	else
	{
		temp = *head;
		newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
		{
			return (NULL);
		}
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = NULL;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		return (newNode);
	}
}
