#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints out the number and its type
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
char alpha = 'a';
char alpha2 = '0';
while (alpha2 <= '9')
{
putchar(alpha2);
alpha2++;
}
while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
