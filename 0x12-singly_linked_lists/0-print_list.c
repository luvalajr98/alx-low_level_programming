#include "lists.h"
/**
 * print_list - prints all the elements of a lists_t list
 * @h: singly linked list
 * Return: number of the elements in the lists
 */
size_t print_list(const list_t *h)
{
	size_t no_elements;

	no_elements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0,"(nil)");
		else
			printf("[%d] %s\n",h->len,h->str);
		h = h->next;
		no_elements++;
	}
	return (no_elements);
}
