#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>


int _putchar(char c);
int word_count(char *string);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(const char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
char *_strcpy(char *destination, char *source);

#endif
