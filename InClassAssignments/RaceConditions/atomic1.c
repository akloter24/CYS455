#include <stdatomic.h>
#include <stdio.h>

int main(){
    atomic_int atomicVar = ATOMIC_VAR_INIT(10);

    atomic_store(&atomicVar, 20);

    int value = atomic_load(&atomicVar);

    printf("The atomic variable's value is: %d\n", value);

    return 0;
}