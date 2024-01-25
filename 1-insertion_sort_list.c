#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * esc_nodes - exchanges two nodes in a list.
 * @h: A pointer to the head of the list.
 * @node1: A pointer to the first node.
 * @node2: The second node.
 */
void esc_nodes(listint_t **h, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*h = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
 * insertion_sort_list - Sorts a list of integers
 * @list: A pointer to the head of a list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *in, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		in = i->prev;
		while (in != NULL && i->n < in->n)
		{
			esc_nodes(list, &in, i);
			print_list((const listint_t *)*list);
		}
	}
}
