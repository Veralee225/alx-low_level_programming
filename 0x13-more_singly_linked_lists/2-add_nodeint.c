#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - a function that adds a new node at the beginnng of a listint_t list
 * @n: nodes in the @listint_t
 * @head: The first node of list
 * Return: The address of the new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_head = malloc(sizeof(listint_t));

    if (new_head == NULL)
            return (NULL);

    new_head->n = n;
    new_head->next = *head;
    *head = new_head;
    return (new_head);
}
