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
char alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
