#include <stdio.h>
/**
 * main - A pgroam that prints the size of various computer types
 * Return 0 (Sucesss)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(b))
return (0);
}
