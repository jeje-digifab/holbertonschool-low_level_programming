#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the dlistint_t list.
 * @index: Index of the node to retrieve, starting from 0.
 *
 * Return: Pointer to the nth node of the list, or NULL if the node does not
 *         exist.
 *
 * Description: This function iterates through the list from the head and
 *              returns a pointer to the node at the specified index. If the
 *              index is out of bounds or the list is empty, the function
 *              returns NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	unsigned int i = 0;

	temp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i == index)
	{
		return (temp);
	}
	return (NULL);
}
