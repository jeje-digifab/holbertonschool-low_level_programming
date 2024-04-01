#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Description: This function traverses the list_t list and prints each
 *              element. If the string (str) in a node is NULL, it prints
 *              "[0] (nil)". Otherwise, it prints the string enclosed in
 *              double quotes, followed by its length enclosed in square
 *              brackets. Each element is printed on a new line. The function
 *              returns the number of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{

	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

	h = h->next;
	i++;
	}
	return (i);
}
