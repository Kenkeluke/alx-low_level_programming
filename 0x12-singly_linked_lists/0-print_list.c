#include "lists.h"
/**
 * print_list - print elements of a single linked list
 * @h: pointer to list param
 * Return: number of nodes
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *node = h;
while (node != NULL)
{
if (node->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", node->len, node->str);
}
node = node->next;
count++;
}
return (count);
}
