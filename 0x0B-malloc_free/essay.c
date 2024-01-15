#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const char *originalString = "";

    // Using strdup to create a duplicate
    char *duplicateString = strdup(originalString);

    if (duplicateString == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;  // Return an error code
    }

    // Now, duplicateString contains a copy of originalString
    printf("Original String: %s\n", originalString);
    printf("Duplicate String: %s\n", duplicateString);

    // Don't forget to free the allocated memory when done
    free(duplicateString);

    return 0;
}
