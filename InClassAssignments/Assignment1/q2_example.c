#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char buffer[5];
    //a prompt how to execute the program
    if (argc < 2)
    {
        printf("strcpy() NOT executed...\n");
        printf("Syntax:%s<characters>/n",argv[0]);
        exit(0);
    }
    //copy the user input to mybuffer
    strcpy(buffer, argv[1]);
    printf("buffer content = %s\n", buffer);
    printf("strcpy() executed...\n");
    return 0;
}