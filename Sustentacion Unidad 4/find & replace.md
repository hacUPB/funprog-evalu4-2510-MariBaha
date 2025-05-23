# Desarrollo de find & replace 🔁

## ¿Como lo hice? 🤔

### Tabla de variables
| Función | Variable               | Tipo       | Rol                                         |
| ------- | ---------------------- | ---------- | ------------------------------------------- |
| main    | texto                | char*    | Entrada                                     |
| main    | palabra_buscar       | char[50] | Entrada                                     |
| main    | palabra_reemplazar   | char[50] | Entrada                                     |
| main    | texto_reemplazado    | char*`    | Salida                                      |
| main    | tamaño_texto         | size_t   | Auxiliar (control de tamaño para getline) |
| main    | tamaño_reemplazado   | size_t   | Auxiliar (cálculo para malloc)            |
| main    | indice_reemplazado   | size_t   | Auxiliar (índice de construcción)           |
| main    | longitud_texto       | size_t   | Auxiliar                                    |
| main    | longitud_buscar      | size_t   | Auxiliar                                   |
| main    | longitud_reemplazar  | size_t   | Auxiliar                                    |
| main    | contador_ocurrencias | size_t   | Auxiliar                                    |
| main    | posicion             | char*    | Auxiliar (puntero de búsqueda)              |
ㅤ

1. Inicio el programa con:

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

🟢 stdio.h: Para entrada/salida (por ejemplo printf, getline).

🔵 string.h: Para funciones de manejo de cadenas (por ejemplo strlen, strstr, strcpy, strcat).

🟣 stdlib.h: Para manejo de memoria dinámica con malloc y free.

2. Aqui declaro las variables:

char *texto = NULL;

size_t tamaño_texto = 0;

char palabra_buscar[50], palabra_reemplazar[50];

char *texto_reemplazado = NULL;

size_t tamaño_reemplazado = 0, 

indice_reemplazado = 0;

3. Uso "getline" para que lea una linea completa y asgne memoria automatica.

getline(&texto, &tamaño_texto, stdin);

4. Aqui elimino el salto de linea final (quita el \n que getline deja al final).

if (longitud_texto > 0 && texto[longitud_texto - 1] == '\n') {
    
texto[longitud_texto - 1] = '\0';

}

5. Aqui uso fgets para leer y eliminar el salto de linea con strcspn.

fgets(...);

palabra_buscar[strcspn(palabra_buscar, "\n")] 
= 0;

6. Utilice strstr para encontrar cada aparición de la palabra a buscar, aqui cuenta las apariciones para poder calcular cuánto espacio se necesitará.

while ((posicion = strstr(posicion, 

palabra_buscar)) != NULL) {
    
contador_ocurrencias++;

posicion += longitud_buscar;

}

7. En esta parte se calcula el tamaño aproximado del nuevo texto y reserva memoria para el texto final.

tamaño_reemplazado = longitud_texto + (longitud_reemplazar - longitud_buscar) * contador_ocurrencias + 1;

texto_reemplazado = (char *)malloc(tamaño_reemplazado);

8. Con este codigo se realiza la construccion del texto reemplazado, si la palabra que se busca aparece, se copia la palabra de reemplazo, más si no, se copia el carácter original uno por uno.

while (*posicion != '\0') {

if (strncmp(posicion, palabra_buscar, 

longitud_buscar) == 0) {

strcat(texto_reemplazado, palabra_reemplazar);

...

posicion += longitud_buscar;

} else {

texto_reemplazado[indice_reemplazado++] = *posicion++;

texto_reemplazado[indice_reemplazado] = '\0';

}

}

9. Aqui se muestran los resultados y libera memoria dinamica para evitar fugas.

printf("Texto original: %s\n", texto);

printf("Texto reemplazado: %s\n", 

texto_reemplazado);

free(texto);

free(texto_reemplazado);

### Pseudocodigo⚡

inicio  

declarar: texto, palabra_buscar, palabra_reemplazar  

declarar: texto_reemplazado  

declarar: contador_ocurrencias e indice como enteros

imprimir: "Ingresa un texto: "  

leer: texto  

imprimir: "Ingresa la palabra a buscar: "  

leer: palabra_buscar  

imprimir: "Ingresa la palabra para reemplazar: "  
    
leer: palabra_reemplazar  

proceso: contar cuántas veces aparece palabra_buscar en texto  

proceso: calcular espacio para texto_reemplazado  

proceso: crear texto_reemplazado reemplazando cada palabra_buscar por palabra_reemplazar  

imprimir: "Texto original: ", texto  
    
imprimir: "Texto reemplazado: ", texto_reemplazado  

liberar memoria usada  

fin









