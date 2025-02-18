#include <stdio.h>
#include <string.h>

int main() {
    // Example 1: Mitigating Buffer Overflow with strcpy() by using strncpy()
    {
        // Buffer size of 10
        char buffer1[10];
        char source1[] = "This string is way too long for the buffer!";

        /* 
         * Use strncpy() to copy at most sizeof(buffer1)-1 characters from source1.
         * This ensures we don't exceed the buffer's capacity and leaves space for the null terminator.
         */
        strncpy(buffer1, source1, sizeof(buffer1) - 1);
        // Manually null-terminate the destination buffer
        buffer1[sizeof(buffer1) - 1] = '\0';

        printf("Example 1 - Using strncpy() to mitigate strcpy() vulnerability:\n");
        printf("Buffer content: %s\n", buffer1);
    }

    // Example 2: Mitigating Buffer Overflow with strcat() by using strncat()
    {
        // Buffer of size 20, already containing some data
        char buffer2[20] = "Hello, ";
        char source2[] = "this extra long string is too long for the buffer!";

        /* 
         * Calculate the remaining space in the buffer.
         * Subtract the current length of the string and 1 for the null terminator.
         */
        size_t remaining = sizeof(buffer2) - strlen(buffer2) - 1;

        /* 
         * Use strncat() to append at most 'remaining' characters from source2.
         * This prevents exceeding the size of buffer2.
         */
        strncat(buffer2, source2, remaining);

        printf("\nExample 2 - Using strncat() to mitigate strcat() vulnerability:\n");
        printf("Buffer content: %s\n", buffer2);
    }

    // Example 3: Mitigating Buffer Overflow with sprintf() by using snprintf()
    {
        char buffer3[10];
        char *largeInput = "This string is too long for buffer overflow!";

        /* 
         * Use snprintf() to write into buffer3.
         * The function will write at most sizeof(buffer3)-1 characters and null-terminate the buffer.
         */
        snprintf(buffer3, sizeof(buffer3), "%s", largeInput);

        printf("\nExample 3 - Using snprintf() to mitigate sprintf() vulnerability:\n");
        printf("Buffer contains: %s\n", buffer3);
    }

    return 0;
}
