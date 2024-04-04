#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a double-chained list
 * @head: pointer to the pointer to the first node in the list
 * @n: integer value to be stored in the new node
 *
 * Return: address of new node, or NULL if memory allocation failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		*head = new;
	}
	
	*head = new;

	return (new);
}
