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
char alpha = '0';
while (alpha <= '9')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
