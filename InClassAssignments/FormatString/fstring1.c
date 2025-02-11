#include <stdio.h>

void main(int argc, char **argv){
    //this line is safe
    printf("%s\n", argv[1]);


    //this line is vulnerable
    printf(argv[1]);
}