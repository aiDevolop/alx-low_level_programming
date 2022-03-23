#include <unistd.h>

/**
 * _putchar - writes the chracter c to stdout
 *@c: the character to print
 *
 *Return: on success 1.
 *On error, -1 is returned, and error is there return
 */

int _putchar(char c)
{
return (write(1, &c, 1));

