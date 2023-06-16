#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Sucess)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;


printf("        float is %2d bytes \n", sizeof(float));
printf("          int is %2d bytes \n", sizeof(int));
printf("         char is %2d bytes \n", sizeof(char));
printf("     long int is %2d bytes \n", sizeof(long int));
printf("     long double * is %2d bytes \n", sizeof(double *));

return (0);
}
