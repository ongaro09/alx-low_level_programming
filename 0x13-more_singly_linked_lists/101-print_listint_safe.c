#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0, cycle = 0;

	while (tortoise && hare && hare->next)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			cycle = 1;
			break;
		}
		count++;
	}

	if (cycle)
	{
		hare = head;
		while (tortoise != hare)
		{
			printf("[%p] %d\n", (void *)hare, hare->n);
			hare = hare->next;
			count++;
		}
		printf("[%p] %d\n", (void *)hare, hare->n);
		return (count + 1);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	return (count);
}
