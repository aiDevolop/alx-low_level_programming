#include  "main.h"
#include <stdio.h>
/**
 *print_array - print elements of an array of integers
 *@a: A poniter to an integer that will be updated
 *@n return value n
 *Return: void which means our answer is correct
 */

vod print_array(int @a, int n)

{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}
i++;
}

printf("\n");
}
 
