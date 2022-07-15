#include "lists.h"
/**
 * list_len - prints the number of  elements of a single linked list
 * @h: pointer to list param
 * Return: number of nodes
 *
 * Description: singly linked list node structure
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *node = h;
while (node != NULL)
{
node = node->next;
count++;
}
return (count);
}
