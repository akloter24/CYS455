#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    //Display current PID
    printf("\nCurrently running process has PID: %d\n", getpid());

    //Use execl to run the ps command with the "-l" option
    int error = execl("/usr/bin/ps", "ps", "-l", NULL);

    //Error handling if execl fails
    printf("\nThere was an error during the execl function!\n");
}