#include "main.h"

/**
 *_strstr- entry point
 *Description:This function checks if a string contains a
 *character and returns a pointer
 * @haystack: Large string
 * @needle: string to be be checked within the larger string
 *
 *
 *Return: pointer to the charcter in the string;
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
int i, j = 0;
for (i = 0; *(haystack + i) != '\0'; i++)
{
if (*(needle + j) ==  *(haystack + i))
	{
return (haystack + i);
}

}
if (*(needle + j) ==  *(haystack + i))
return (haystack + i);
else
return ('\0');
}
