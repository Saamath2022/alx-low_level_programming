#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print lower case alphabet in reverse follow by a new line
 * Return: Aways 0 (Success)
 */
 
int main(void)
{
	char alphabet = 'a';
	
	while (alphabet <= 'z')
	{
		 putchar(alphabet);
		 alphabet++;
   	}
	putchar('\n');
	return (0);
}
