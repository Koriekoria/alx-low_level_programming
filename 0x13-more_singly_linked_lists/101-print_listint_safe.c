#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeaddress - Add a node to a list with
 * @head: Pointer to the pointer of the start of the list
 * @address: The address of another list's node
 *
 * Return: Address of new node, NULL if it fails
 */
listint_t *add_nodeaddress(listint_t **head, const listint_t *address)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free_listint(*head);
		exit(98);
	}
	new->address = (void *)address;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * free_listint - Free a list
 * @head: Pointer to the start of the list
 */
void free_listint_t(listint_t *head)
{
	listint_t *killnode;

	while (head != NULL)
	{
		killnode = head;
		head = head->next;
		free(killnode);
	}
}

/**
 * print_listint_safe - Print out a given list, but only once if it loops
 * @head: Pointer to the start of the list
 *
 * Return: Number of nodes, if it fails print 98
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *newhead;
	listint_t *checker;
	unsigned int count;

	count = 0;
	newhead = NULL;
	while (head != NULL)
	{
		checker = newhead;
		while (checker != NULL)
		{
			if (head == checker->address)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listint(newhead);
				return (count);
			}
			checker = checker->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		add_nodeaddress(int **, head);
		head = head->next;
		count++;
	}
	free_listint(newhead);
	return (count);
}
