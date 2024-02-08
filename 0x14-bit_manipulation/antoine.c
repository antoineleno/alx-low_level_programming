#include <stdio.h>

int main(void)
{
    int a = 69;
    int i = 0;
    int remainder = 0;

    while (a > 0)
    {
        remainder = a & 1;  // Get the LSB of 'a'
        printf("%d", remainder);  // Print the LSB
        a = a >> 1;  // Left-shift 'a' to consider the next bit
    }

    printf("\n");
    int NumberOfBit = 0;
    int b = 69, c;

    while (b > 0)
    {
        b = b >> 1;
        NumberOfBit++;
    }

    c = 69;
    int q;
    printf("%d\n", NumberOfBit);
    int q = c >> 6;
    int r = q & 1;
    printf("%d\n", r);

    return (0);
}
