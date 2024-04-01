#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Description: This function creates a new node with a duplicate of the
 *              input string, sets the length of the string in the new node,
 *              sets the next pointer of the new node to the current head of
 *              the list, and updates the head of the list to point to the
 *              new node. If memory allocation fails, the function returns
 *              NULL.
 *
 * Return: address of the new node, or NULL if memory allocation failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		while (new->str[len] != '\0')
		{
			len++;
		}

		new->len = len;
		new->next = *head;
		*head = new;
	}
	return (new);
}
