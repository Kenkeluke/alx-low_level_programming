#include "lists.h"
/**
 *add_nodeint_end- Function that adds a new node at the tail
 *of a single linked list
 *Description: This is a function pointer tha takes takes two parameters,
 *a pointer to another pointer that points to a node and and integer
 *@head:double pointer to a node
 *@n: integer data type for the node
 *
 * Return: address to the new node
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *last_node = malloc(sizeof(listint_t));
last_node = *head;
new_node->n = n;
new_node->next = NULL;
if (head == NULL)
{
*head = new_node;
return (*head);
}
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;

return (last_node);
}
