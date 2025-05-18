#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[1000]; 
    int totalCaracteres = 0;
    int totalPalabras = 0;
    int totalEspacios = 0;
    int totalLineas = 1; // Inicializamos en 1 porque si hay texto, al menos hay una línea
    int enPalabra = 0; // Bandera para mostrar si se esta dentro de una palabra

    printf("Escribe el texto que deseas analizar, luego, presiona Ctrl+D o Ctrl+Z y luego Enter para finalizar la entrada.\n");

    while (fgets(texto, sizeof(texto), stdin) != NULL) {
        for (int i = 0; texto[i] != '\0'; i++) {
            if (texto[i] != '\n') {
                totalCaracteres++;
            }

            if (isspace(texto[i])) {
                totalEspacios++;
                enPalabra = 0;
                if (texto[i] == '\n') {
                    totalLineas++;
                }
            } else if (!isspace(texto[i]) && enPalabra == 0) {
                totalPalabras++;
                enPalabra = 1;
            }
        }
    }

    printf("\nEstadísticas del texto:\n");
    printf("Total de caracteres (excluyendo \\n): %d\n", totalCaracteres);
    printf("Total de palabras: %d\n", totalPalabras);
    printf("Total de espacios en blanco: %d\n", totalEspacios);
    printf("Total de líneas: %d\n", totalLineas);

    return 0;
}
