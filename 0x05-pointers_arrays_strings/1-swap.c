#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to an int
 * @d: pointer to an int
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}