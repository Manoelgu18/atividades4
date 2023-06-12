#include <stdio.h>

void main() {
    int num;
    for (num = 1000; num < 1999; num++) {
        if (num % 11 == 5) {
            printf("%i\n", num);
        }
    }
}