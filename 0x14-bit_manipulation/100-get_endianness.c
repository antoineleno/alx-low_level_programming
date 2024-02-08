#include "main.h"
/**
 * get_endianness - Function that ckecks the endianness.
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	union
	{
		int i;
		char c[sizeof(int)];
	} u;

	u.i = 1;

	return ((u.c[0] == 1) ? 1 : 0);
}
