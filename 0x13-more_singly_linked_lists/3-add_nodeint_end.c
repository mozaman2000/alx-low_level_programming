#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lis;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (!lis)
		return (NULL);

	lis->n = n;
	lis->next = NULL;

	if (*head == NULL)
	{
		*head = lis;
		return (lis);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = lis;

	return (lis);
}

