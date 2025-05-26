#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *texto = NULL;
    size_t tamaño_texto = 0;
    char palabra_buscar[50];
    char palabra_reemplazar[50];
    char *texto_reemplazado = NULL;
    size_t tamaño_reemplazado = 0;
    size_t indice_reemplazado = 0;

    printf("Ingresa un texto: ");
    getline(&texto, &tamaño_texto, stdin);

    // Eliminar el salto de línea al final si existe
    size_t longitud_texto = strlen(texto);
    if (longitud_texto > 0 && texto[longitud_texto - 1] == '\n') {
        texto[longitud_texto - 1] = '\0';
    }

    printf("Ingresa la palabra a buscar: ");
    fgets(palabra_buscar, sizeof(palabra_buscar), stdin);
    palabra_buscar[strcspn(palabra_buscar, "\n")] = 0; // Eliminar salto de línea

    printf("Ingresa la palabra para reemplazar: ");
    fgets(palabra_reemplazar, sizeof(palabra_reemplazar), stdin);
    palabra_reemplazar[strcspn(palabra_reemplazar, "\n")] = 0; // Eliminar salto de línea

    size_t longitud_buscar = strlen(palabra_buscar);
    size_t longitud_reemplazar = strlen(palabra_reemplazar);
    char *posicion = texto;

    // Calcular el tamaño necesario para el nuevo texto (aproximado)
    size_t contador_ocurrencias = 0;
    while ((posicion = strstr(posicion, palabra_buscar)) != NULL) {
        contador_ocurrencias++;
        posicion += longitud_buscar;
    }
    tamaño_reemplazado = longitud_texto + (longitud_reemplazar - longitud_buscar) * contador_ocurrencias + 1;
    texto_reemplazado = (char *)malloc(tamaño_reemplazado * sizeof(char));
    if (texto_reemplazado == NULL) {
        perror("Error al asignar memoria");
        free(texto);
        return 1;
    }
    texto_reemplazado[0] = '\0'; // Inicializar la cadena de reemplazo

    posicion = texto;
    while (*posicion != '\0') {
        if (strncmp(posicion, palabra_buscar, longitud_buscar) == 0) {
            // Se encontró la palabra, se copia la palabra de reemplazo
            strcat(texto_reemplazado, palabra_reemplazar);
            indice_reemplazado += longitud_reemplazar;
            posicion += longitud_buscar;
        } else {
            // No se encontró la palabra, se copia el carácter actual
            texto_reemplazado[indice_reemplazado++] = *posicion++;
            texto_reemplazado[indice_reemplazado] = '\0'; // Mantener la terminación nula
        }
    }

    printf("Texto original: %s\n", texto);
    printf("Texto reemplazado: %s\n", texto_reemplazado);

    // Liberar la memoria dinámica
    free(texto);
    free(texto_reemplazado);

    return 0;
}