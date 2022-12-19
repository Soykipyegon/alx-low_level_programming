#include "main.h"

/**
 *_strlen-Returns the length of a string.
 *@s:String
 *Return: length
 */

int _strlen(char *s)
{
int len = 0;
/ incremeant up to when the last character is NULL, \ 0 /
while (*s != '\0')
{
len++;
s++;
}

return (len);
}
