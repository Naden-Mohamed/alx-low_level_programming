#include "main.h"
#include <stdlib.h>
/**
  * _strdup - Duplicate a string
  * @str: a string to duplicate
  *
  * Return: The array filled
  */
char *_strdup(char *str)
{
int a = 0, i = 1;
char *s;
if (str == 0)
return (NULL);
while (str[i])
{
i++;
}
s = malloc((sizeof(char) * i) + 1); 
if (s == NULL)
return (NULL);
while (a < i)
{
s[a] = str[a];
a++;
}
s[a] = '\0';
return (s);
}
