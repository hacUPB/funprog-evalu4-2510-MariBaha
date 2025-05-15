#include <stdio.h>

int main(void) {
    int primeros[5], segundos[5], combinados[10];

    printf("Ingrese los primeros 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &primeros[i]);
    }

    printf("Ingrese los siguientes 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &segundos[i]);
    }

    for (int i = 0; i < 5; i++) {
        combinados[i] = primeros[i];
        combinados[i + 5] = segundos[i];
    }

    printf("Arreglo combinado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", combinados[i]);
    }

    return 0;
}
