#include <stdio.h>
/**
 * main - Entry point
 *
<<<<<<< HEAD
 * Return: Always 0 (Sucess/correct)
 */
int main(void)

{
char lower_case;
char upper_case;

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case);
}


for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}




putchar ('\n');

=======
 * Return Always 0 (Success/Correct)
 */
int main(void)

{
char lower_case;
char upper_case;

<<<<<<< HEAD
for (lower_case = 'a'; lower_case < 'z'; lower_case++)
{
putchar(lower_case);
}

for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}

putchar('\n');
=======
for (lower_case; 'a'; lower_case <= 'z'; lower_case++)
putchar(lower_case)
}

for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}

putchar ('\n');
>>>>>>> ff4fcd3c3282953c3f3a3900d3efb8c568ef4af0
return (0);
