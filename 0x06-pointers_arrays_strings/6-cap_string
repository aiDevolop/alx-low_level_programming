#include "main.h"
/**
*cap_string - a function that capitalizes all words of a string.
*
*@str: Pointer to the array.
*
*Return: string pointer.
*/
char *cap_string(char *str)
{
	int i = 0, j;
	char cap[] = ";.!?\"()\t{}\n ";
	int len = _strlen(str);

	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
	}
	for (i = 0; i < len; ++i)
	{
		for (j = 0; j <  _strlen(cap); ++j)
		{
			if (str[i] == cap[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
/**
* _strlen - function that that returns the length of a string.
* @s : pointer to a string.
* Return: string lenght
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
