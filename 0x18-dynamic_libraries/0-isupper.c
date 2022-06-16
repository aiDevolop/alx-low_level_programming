#include "main.h"

/**
 * _isupper - function checks for uppercase character.
 * @c: inputs character to check
 * Return: int.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
