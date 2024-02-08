#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>

int _putchar(char c);
int _strlen(const char *string);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
unsigned int binary_to_uint(const char *b);

#endif
