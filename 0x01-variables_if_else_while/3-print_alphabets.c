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
char alpha2 = 'A';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
while (alpha2 <= 'Z')
{
putchar(alpha2);
alpha2++;
}
putchar('\n');
return (0);
}
