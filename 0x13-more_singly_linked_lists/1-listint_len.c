#include "lists.h"
/**
 *listint_len - function that returns the number of elements in a list
 *@h: pointer to the head
 *
 *Description: counts the number of elements in a singly linked list
 *Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
size_t num_elements;
if (h != NULL)
num_elements = 1;
while (h->next != NULL)
{
num_elements++;
h = h->next;
}
return (num_elements);
}
