#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    unsigned short s;
    int i;
    char buf[80];
    //check if there are at least 3 arguments (program name + 2 additional)
    if (argc < 3){
        return -1;
    }
    // convert the first argument to an integer and assign it to i
    i = atoi(argv[1]);
    // cast the integer i to an unsigned short and assign it to s
    s = (unsigned short)i;
    if (s >= 80){
        printf("No you don't!\n");
        return -1;
    }
    // print the value of s 
    printf("s = %d\n", s);
    // copy the second argument to the buffer
    memcpy(buf, argv[2], i);
    // null terminate the buffer
    buf[i] = '\0';
    // print the buffer
    printf("%s\n", buf);
    return 0;
}