#include "main.h"

/**
 *_strlen _length of a string
 *@s: A pointer to sn int that could be changed or updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

