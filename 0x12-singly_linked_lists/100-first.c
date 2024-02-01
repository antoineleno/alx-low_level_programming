#include <stdio.h>

/**
 * My_starting_message - Function to be execute before the main function
*/

void My_starting_message(void) __attribute__ ((constructor));

void My_starting_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
