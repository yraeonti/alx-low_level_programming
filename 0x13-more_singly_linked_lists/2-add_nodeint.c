#include "lists.h"
#include<stdlib.h>

/**
 * add_nodeint - function to return listint_t
 * @head: pointer to pointer to list
 * @n: int
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
