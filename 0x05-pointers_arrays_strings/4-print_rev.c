/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int length;
int i;
while (*s != '\0')
{
length++;
s++;
}
for (i = length; i < length; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}