#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    srand(2);

    for(i=0; i < 10; i++){
        printf("%d\n", rand()%100);
        printf("\n");
    }
    srand(3);
    for(i=0; i < 10; i++){
        printf("%d\n", rand()%100);
        printf("\n");

        return(0);
    }
}