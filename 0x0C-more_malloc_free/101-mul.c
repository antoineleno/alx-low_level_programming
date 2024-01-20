#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

void _digits_checker(char *str);
void _print_message(void);

int main(int argc, char *argv[])
{
	int result = 1, i, number1, number2;

	if (argc != 3)
	{
		_print_message();
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		_digits_checker(argv[i]);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result  = number1 * number2;


	printf("%d\n", result);
	return (0);
}


/**
 * _print_message - Function to print a single character.
*/

void _print_message(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * _digits_checker - Function to check if an argument is a digit
 * @str: argument to be check
 * Return: 0 is digits otherwise 1
*/
void _digits_checker(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			_print_message();
			exit(98);
		}
		str++;
	}
}
