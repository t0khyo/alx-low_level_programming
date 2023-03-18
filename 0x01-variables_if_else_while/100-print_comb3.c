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
int a, b, c;

a = 0;

while (a < 100)
{
b = a % 10;
c = a / 10;

if (c < b)
{
putchar(c + '0');
putchar(b + '0');

if (a < 89)
{
putchar(',');
putchar(' ');
}
}

a++;
}
putchar('\n');
return (0);
}
