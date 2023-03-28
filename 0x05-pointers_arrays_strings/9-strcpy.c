#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
int i;

while (*(src + length) != '\0')
{
length++;
}
for (i = 0; i < length ; i++)
{
dest[i] = src[i];
}
dest[length] = '\0';
return (dest);
}
