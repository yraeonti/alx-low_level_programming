#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - entry point
 * @head: pointer to pointer to list_h
 * @str: pointer to char
 * Return: list_t or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *firstNode;

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
                newNode = malloc(sizeof(list_t));
                if (newNode == NULL)
                {
                        return (NULL);
                }
                newNode->str = strdup(str);
                newNode->len = strlen(str);
                newNode->next = *head;
                *head = newNode;
                return (newNode);
        }

}
