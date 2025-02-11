#include <stdio.h>

void main(int argc, char **argv){
    char buf[100];
    //snprintf(buf, sizeof buf, argv[1]);
    snprintf(buf, sizeof buf, "%s", argv[1]);
    printf("Buffer Content: %s\n", buf );
}