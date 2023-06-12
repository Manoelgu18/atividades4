#include <stdio.h>

void main() {
    float resu, num1, num2;
    num1 = 1;
    num2 = 1;
    while (!(num2 == 51)) {
        resu = num1/num2;
        printf("%.0f / %.0f = %.03f\n", num1, num2, resu);
        num1 += 2;
        num2++;
    }
}