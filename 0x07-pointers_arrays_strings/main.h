#ifndef MAIN_H
#define MAIN_H

/**
 * file: main.h
 * Auth: Masa tech (Saa-Aondo Mathias)
 * description: header file containing prototypes for all function
 * used in the 0x0-pointers_arrays_strings director
 */

#include <stddef.h>
int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *char *dest, char *src, unsigned int n);
char *_strchr(char *s char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(chr *s, char *accept);
char *_strchr(char *s, haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
