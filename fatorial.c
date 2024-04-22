#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i, num, aux;

    printf("Digite um numero inteiro positivo para saber seu faotrial. \n");
    scanf("%d", &num);

    if (num < 0) {
        printf("O numero deve ser maior que zero");
    } else {
        aux = num;
        for (i = 1; i < num; i++) {
            aux = aux * (num - i);
        }
        printf("%d", aux);
    }
}