#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt_helper(int guess, int n);
int is_prime_number(int n);
int _is_prime_number_helper(int m, int n);
int is_palindrome(char *s);
int is_palindrome_helper(int start, int end, char *s);
int wildcmp(char *s1, char *s2);
int wildcmp_helper(int i, int j, char *s1, char *s2);

#endif
