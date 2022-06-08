 #include "main.h"

/**
 * _isalpha - entry point
 * Description :This function checks if a character is an alphabet
 *@c : is the parameter
 *
 *
 *Return: 0, always success
 *
 *
 */



int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}

return (0);
}
