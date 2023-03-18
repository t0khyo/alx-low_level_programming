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
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
