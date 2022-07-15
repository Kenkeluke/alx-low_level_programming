#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
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
        {printf("[0] (nil)");}
        printf("[%u] %s\n", node->len, node->str);
        node = node->next;
        count++;
    }
    return (count);
}