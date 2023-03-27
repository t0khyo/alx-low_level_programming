/**
 * _strlen - returns the length of a string
 * @s is a pointer to a char arr
 * Return : the length of the string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
