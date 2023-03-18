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
while (alpha <= 'z')
{
if (alpha == 'e' || alpha == 'q')
{
alpha++;
continue;
}
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
