#include "lists.h"
/**
 *add_nodeint- Function that adds a new node at the tail
 *of a single linked list
 *Description: This is a function pointer tha takes takes two parameters,
 *a pointer to another pointer that points to a node and and integer
 *@head:double pointer to a node
 *@n: integer data type for the node
 *
 * Return: address to the new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
new_node->n = n;
new_node->next = NULL;
new_node->next = *head;
*head = new_node;
return (*head);
}
