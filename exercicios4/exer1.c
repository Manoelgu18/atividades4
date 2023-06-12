#include <stdio.h>

void main(){
int num, maior, menor, v;
    for (v = 1; v <= 5; v++){
        puts("Digite um numero:");
        scanf("%d", &num);
        if (v == 1){
            maior = num;
            menor = num;
        }
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);

}
