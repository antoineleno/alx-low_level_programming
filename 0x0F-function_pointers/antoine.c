#include <stdio.h>
#include <stdlib.h>

void _printf_opcode(char *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		printf(" ");
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	int n;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	_printf_opcode((char *)&main, n);
	return (0);
}
