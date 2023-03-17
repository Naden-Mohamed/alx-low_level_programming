#include <unistd.h>

/**
 * main - prints "and the piece of art is useful" - Dore Korpar, 2015-10-19",
 * followed by a newline, to standard error.
 * Return: Always 1.
 */
int main(void)
{
write(2, "and the piece of art is useful\" - Dore Korpar, 2015-10-19\n", 59);
return (1);
}
