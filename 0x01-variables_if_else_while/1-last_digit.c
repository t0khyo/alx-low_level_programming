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
int m;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, m);
else if (m == 0)
printf("Last digit of %d is %d and is 0\n", n, m);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
return (0);
}
