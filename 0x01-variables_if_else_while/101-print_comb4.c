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
int a, b, c, d;

for (a = 0; a < 1000; a++)
{
b = a / 100; /* hundreds */
c = (a / 10) % 10; /* tens */
d = a % 10; /* singles */

if (b < c && c < d)
{
putchar(b + '0');
putchar(c + '0');
putchar(d + '0');

if (a < 700)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
