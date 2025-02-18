#include <stdio.h>

//Declaration of environment variable
extern char **environ;

int main() {
    //Pointer to iterate through environment variables
    char **env = environ;

    //Loop through and print each environment variable
    while (*env) {
        printf("%s\n", *env);
        env++;
    }

    return 0;

}