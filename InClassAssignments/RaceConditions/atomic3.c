#include <stdio.h>
#include <stdatomic.h>

int main() {
    atomic_int controlVar = ATOMIC_VAR_INIT(100);
    int expected = 100;
    int desired = 200;

    // Atomic compare and exchange
    if (atomic_compare_exchange_strong(&controlVar, &expected, desired)) {
        printf("Value successfully changed to %d\n", atomic_load(&controlVar));
    }
    else {
        printf("Exchange failed. Current value is %d\n", expected);
    }
}