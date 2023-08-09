#include "main.h"


/**
 * set_string - entry
 * Description : this function sets strings
 * @s: string to be set
 * @to: character to set
 *Return: void
 */

void set_string(char **s, char *to)
{
int i;
for (i = 0; **(s + i) != '\0'; i++)
{
*(s + i) = to;
}

}
