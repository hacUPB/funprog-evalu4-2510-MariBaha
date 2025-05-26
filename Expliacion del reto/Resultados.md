# Desarrollo de la parte de resultados 🥳🟰

## ¿Como lo hice? 🤔

1. Comence el programa con: 

#include <stdio.h>
#include <string.h>

2. Declaro las variables, nombre_archivo almacenará el nombre del archivo ingresado por el usuario y archivo_salida será el puntero al archivo que se va a escribir.

char nombre_archivo[100];
FILE *archivo_salida;

3. Le solicito al usuario el nombre para el archivo.

printf("Ingresa el nombre del archivo de salida: ");

scanf("%99s", nombre_archivo);

("%99s" limita la entrada a 99 caracteres para evitar errores de desbordamiento de memoria).

4. Aquí fopne abre o crea el archivp en modo de escritura "w".

archivo_salida = fopen(nombre_archivo, "w");

5. En este codigo se verifica si fopen fallo (por ejemplo, que el archivo no se pueda crear), digamos que el programa falle, en ese caso se termina con codigo error 1.

if (archivo_salida == NULL) {

printf("Error al abrir el archivo\n");

return 1;

}

6. Aqui creo algunas variables con datos simulados a guardar.

double promedio = 7.8;

int frecuencia_a = 15;

char texto_modificado[] = "Este es el texto 
con modificaciones.";

7. Aqui con fprintf escribe texto en un archivo (como printf, pero dirigido a archivo_salida).

fprintf(archivo_salida, "Estadísticas:\n");

fprintf(archivo_salida, "Promedio: %.2f\n", promedio);

...

(Se formatean los datos: el promedio se muestra con 2 decimales (%.2f)).

8. Con "fclose(archivo_salida);" cierro el archivo para asi asegurar que los datos se guarden bien.

9. Por ultjmo como mensaje final al usuario que el archivo fue creado y que ademas se guardo correctamente.

printf("Los resultados han sido guardados en el archivo '%s'\n", nombre_archivo);


