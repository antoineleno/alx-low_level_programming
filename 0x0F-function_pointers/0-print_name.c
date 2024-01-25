#include "function_pointers.h"
/**
 * print_name - Function to print the name
 * @name: name to be printed
 * @f: Function hold as argument
 * Return: No value to be returned.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
