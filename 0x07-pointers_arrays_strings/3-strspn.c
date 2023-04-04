#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, check;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != s[i]; n++)
{
if (accept[n] == '\0')
{
return (i);
} 
}
return (i);
}
