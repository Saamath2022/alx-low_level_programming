#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
    int x;

    for (x = 48; x < 58; x++)
    {
        putchar(x);
        if (x < 57)
        {
            putchar(44);
            putchar(32);
        }
    }
    putchar('\n');
    return (0);
}
