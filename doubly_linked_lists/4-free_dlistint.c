#include "lists.h"

/**
 * free_dlistint - Frees a list_t list.
 * @head: Pointer to the head of the list_t list.
 *
 * Description: This function frees the memory allocated for each node in the
 *              list_t list, including the memory allocated for the string
 *              stored in each node. It iterates through the list using a
 *              temporary pointer, freeing the memory for each node and the
 *              string it contains, until it reaches the end of the list.
 *              Finally, it sets the head of the list to NULL.
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		free(head->prev);
		free(temp->next);
		head = head->next;
		free(temp);
	}
	head = NULL;
}
