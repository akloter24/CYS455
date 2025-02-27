#include <stdatomic.h>
#include <stdio.h>

int main() {
    atomic_int counter = ATOMIC_VAR_INIT(0);

    atomic_fetch_add(&counter, 5);

    printf("Counter value after atomic addition: %d\n", counter);

    return 0;

}