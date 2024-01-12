#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments 
 * @argv: Arguments passed
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
    long int result = 1;
    long int i;
    long int n;
    int temp;

    if (argc == 1)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            n = _atoi(argv[i]);
            result = result * n;
            temp = result;
        }

        if (temp == 0)
        {
            _putchar('0');
        }
        else
        {
            if (temp < 0)
            {
                _putchar('-');
                temp = -temp;  
            }

            
            while (temp != 0)
            {
                _putchar((temp % 10) + '0');
                temp /= 10;
            }
        }
    }
    _putchar('\n');

    return (0);
}
