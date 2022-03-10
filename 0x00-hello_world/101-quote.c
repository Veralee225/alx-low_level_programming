#include <stdio.h>
#include <unistd.h>

int main(void)
{
    write(2, "and that piece of art is useful - Dora korper, 2015-19\n", 58);
    return (1);
}

/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 if success.
 */