#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * My_starting_message - prints a sentence before the main
 * function is executed
 */


void My_starting_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
