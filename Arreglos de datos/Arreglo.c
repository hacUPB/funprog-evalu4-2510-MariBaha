#include <stdio.h>

int main(void) {
    // Declaración e inicialización del arreglo
    int temperaturas[5] = {22, 25, 19, 24, 21};

    // Imprimir valores y direcciones de memoria
    for (int i = 0; i < 5; i++) {
        printf("temperaturas[%d] = %d\t Dirección de memoria: %p\n", 
               i, temperaturas[i], (void*)&temperaturas[i]);
    }

    return 0;
}
