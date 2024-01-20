#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>

void *malloc_checked(unsigned int b);
unsigned int _strlen(char *string);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _putchar(char c);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *_memset(char *s, char b, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
