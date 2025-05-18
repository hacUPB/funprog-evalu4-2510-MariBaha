#include <stdio.h>
#include <ctype.h>  // Para tolower ()

int main() {
    char c;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Ingresa el texto (Ctrl+D para terminar en Linux/Mac, Ctrl+Z en Windows):\n");

    while ((c = getchar()) != EOF) {
        c = tolower(c); // Se convierte a minúscula para unificar
        switch (c) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
    }

    printf("\nFrecuencia de vocales:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}
