#include "main.h"
/**
 * main - Entry point
 * Write a program that prints _putchar, followed by a new line.
 * The program should return: Zero
 */
int main (void)
{
    char *ch = "_putchar";

    while (*ch)
    {
        _putchar(*ch);
        ch++;
    }
    _putchar('\n');
return (0);
}
