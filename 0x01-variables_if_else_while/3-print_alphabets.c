#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*
*/

int main(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)
purchar(low);

for (low = 'A'; low <= 'Z'; low++)
purchar(low);
purchar('\n');

return (0);
}
