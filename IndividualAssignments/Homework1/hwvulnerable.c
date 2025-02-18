#include <stdio.h>
#include <string.h>

int main() {
    // Example 1: Buffer Overflow with strcpy()
    {
        //Buffer Size of 10
        char buffer1[10]; 
        char source1[] = "This string is way too long for the buffer!";

        // strcpy() copies the entire source string into the buffer without checking the size
        // This will overflow the buffer, overwriting adjacent memory
        strcpy(buffer1, source1);

        printf("Example 1 - strcpy():\n");
        // This may crash or produce unexpected output
        printf("Buffer content: %s\n", buffer1); 
    }

    // Example 2: Buffer Overflow with strcat()
    {
        // Buffer of size 20, already containing some data
        char buffer2[20] = "Hello, "; 
        char source2[] = "this extra long string is too long for the buffer!";

        // strcat() appends the source string to the buffer without checking the size
        // This will overflow the buffer if the combined length exceeds its capacity
        strcat(buffer2, source2);

        printf("\nExample 2 - strcat():\n");
        // This may crash or produce unexpected output
        printf("Buffer content: %s\n", buffer2); 
    }

    // Example 3: Buffer Overflow with sprintf()
    {
        char buffer3[10];

        // A large string that exceeds the size of 'buffer3'
        char *largeInput = "This string is too long for buffer overflow!";

        // Vulnerable usage: sprintf does not check if the data fits in 'buffer3'.
        sprintf(buffer3, "%s", largeInput);

        printf("\nExample 3 - sprintf():\n");
        // The following printf may display corrupted data or cause a crash.
        printf("Buffer contains: %s\n", buffer3);
        return 0;
    }
}