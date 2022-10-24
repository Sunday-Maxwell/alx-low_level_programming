#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all elements of list_t
* @h: linked list head
* Return: elements and number of nodes in linked list
*/

size_t print_list(const list_t *h)
{
	size_t count = 0; /* initialize the number of elements */

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
