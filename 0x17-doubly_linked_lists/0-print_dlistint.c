#include "lists.h"
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 * 
 * Description: doubly linked list node structure
 * 
 */
size_t print_dlistint(const dlistint_t *h);
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
