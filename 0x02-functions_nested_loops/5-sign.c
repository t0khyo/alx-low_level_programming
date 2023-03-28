#include "main.h"
/**
 * print_sign - tests whether a character is from the English alphabet.
 * @n: character to be checked.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
