#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* main - a function that returns the number of element in a linked listint_t list
* @h: pointer to the head node of the linked list
* Return: size_t, the number of nodes in a linked list
*/
size_t listint_len(const listint_t *h)
{
    size_t num_of_nodes = 0;

    while (h)
    {
        h = h->next;
        num_of_nodes++;
    }
    return (num_of_nodes);
}
