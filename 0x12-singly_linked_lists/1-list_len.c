#include "lists.h"

/**
* print_list - function that prints all elements of list_t
* @h: linked list head
* Return: elements and number of nodes in linked list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0; /* initialize the number of elements */

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
