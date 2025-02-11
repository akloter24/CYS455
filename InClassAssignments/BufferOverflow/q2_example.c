#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char buffer[5];  // Buffer of 5 bytes

    // Check if the user provided an argument
    if (argc < 2) {
        printf("strcpy() NOT executed...\n");
        printf("Syntax: %s <characters>\n", argv[0]);
        exit(0);
    }

    // Use snprintf to safely copy and format the string
    snprintf(buffer, sizeof(buffer), "%s", argv[1]);

    printf("buffer content = %s\n", buffer);
    printf("snprintf() executed safely...\n");

    return 0;
}
