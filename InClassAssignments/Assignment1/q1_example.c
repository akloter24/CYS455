#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    short length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[20];  // Buffer size is 20
    printf("Enter a string: ");
    
    // Use fgets to prevent buffer overflow
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove the trailing newline if present
        str[strcspn(str, "\n")] = '\0';

        reverseString(str);
        printf("Reversed string: %s\n", str);
    } else {
        printf("Error reading input.\n");
    }
    
    return 0;
}
