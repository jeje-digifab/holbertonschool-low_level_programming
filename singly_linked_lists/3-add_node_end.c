#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 *
 * Description: This function creates a new node with a duplicate of the
 *              input string, sets the length of the string, and adds it
 *              to the end of the list. If the function fails, it returns
 *              NULL. If the input string is NULL, the function returns
 *              NULL. The function uses strdup to duplicate the string,
 *              so the string must be null-terminated.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *temp;

	temp = NULL;
	current = NULL;

	if (!head)
	{
		return (NULL);
	}

	current = malloc(sizeof(list_t));

	if (!current)
	{
		return (NULL);
	}

	current->str = strdup(str);
	if (!current->str)
	{
		free(current);
		return (NULL);
	}

	current->len = strlen(current->str);
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = current;
	return (current);
}
