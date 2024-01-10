#include <stdio.h>
#include <string.h>

int main(void)
{
    // Copy
    char name[100] = "This is c programming123";
    int n = strspn(name, "123");
    int m = strcspn(name, "123");
    char *pointer = strstr(name, "is");
    char *second_pointer = strchr(name, 'c');
    printf("%s\n",second_pointer);
    char *third_pointer = strtok(name, "c");
    printf("%s\n",third_pointer);
    printf("%s\n",pointer);
    printf("%d\n", m);

    return (0);
}
