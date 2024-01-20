#include <stdio.h>
#include <string.h>
void _print_digit(int number)
{
    int remainder;

    // Handle the case when the number is 0 separately
    if (number == 0)
    {
        putchar('0');
        return;
    }

    // Process each digit in reverse order
    while (number > 0)
    {
        remainder = number % 10;
        // Convert the digit to character and print it
        putchar('0' + remainder);

        // Move to the next digit
        number = number / 10;
    }
}

int main()
{
    int num = 12345;
    printf("%d\n",sizeof(num));

    return 0;
}
