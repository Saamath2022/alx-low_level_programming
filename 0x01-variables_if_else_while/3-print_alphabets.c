#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
    /* Declare a variable and initialize it with the first member of 
       the range [a - z] 
    */

    char alphabet = 'a';

     /* check to see if the current value of your variable is less than 
         or the same as the last member (z) of the given range. While 
         the value is less, go ahead and print the value 
      */

    while (alphabet <= 'z')
    {
        putchar(alphabet);
        alphabet++;
    }

    putchar('\n');
    return (0);
}
