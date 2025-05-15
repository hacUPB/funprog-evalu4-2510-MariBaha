#include <stdio.h>
int main() {
    int opcion;
    do {
        // Mostrar menú
        printf("\n=== Menú Principal ===\n");
        printf("1. Calcular total de líneas\n");
        printf("2. Calcular total de palabras\n");
        printf("3. Calcular total de caracteres\n");
        printf("4. Busca una palabra específica\n");
        printf("5. Guarda resultados en un archivo\n");
        printf("6. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);
        // Procesar opción
        switch (opcion) {
            case 1:
                printf("Opción 1 seleccionada: Calcular total de líneas\n");
                break;
            case 2:
                printf("Opción 2 seleccionada: Calcular total de palabras\n");
                break;
            case 3:
                printf("Opción 3 seleccionada: Calcular total de caracteres\n");
                break;
            case 4:
                printf("Opción 4 seleccionada: Buscar una palabra específica\n");
                break;
            case 5:
                printf("Opción 5 seleccionada: Guardar resultados\n");
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 6);
    return 0;
}
 