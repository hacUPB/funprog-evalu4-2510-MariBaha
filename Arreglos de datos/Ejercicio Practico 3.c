#include <stdio.h>

int main(void) {
    int numeros[10];
    int suma = 0, resta = 0, multiplicacion = 1;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        suma += numeros[i];
        resta -= numeros[i];
        multiplicacion *= numeros[i];
    }

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicacion: %d\n", multiplicacion);

    return 0;
}
