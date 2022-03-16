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

for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}
for (lower_case = 'a'; lower_case < 'z'; lower_case++)
{
putchar(lower_case);
}

putchar('\n');
>>>>>>> 2f48a52d2aefcb1ed6f9c68ce9209bdecfd92449
return (0);

}


