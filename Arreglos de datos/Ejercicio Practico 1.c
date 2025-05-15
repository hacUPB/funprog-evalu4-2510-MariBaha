#include <stdio.h>

int main(void) {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        numeros[i] = 11 + i;
    }
    for (int i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    return 0;
}

