#include <stdio.h>

void main() {
    int num, camadas, hash;
    printf("Digite o numero de camadas da piramide:\n");
    scanf("%i", &num);
    for (camadas = 1; camadas <= num; camadas++) {
        for (hash = 1; hash <= camadas; hash++) {
            printf("#");
        }
        printf("\n");
    }
}