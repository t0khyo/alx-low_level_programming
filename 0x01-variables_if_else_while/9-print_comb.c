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
int i = 0;
while (i < 10)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
