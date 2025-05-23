# Desarrollo de las Estadisticas 📊

## ¿Como lo hice? 🤔

### Tabla de variables
| Función | Variable          | Tipo         | Rol                        |
| ------- | ----------------- | ------------ | -------------------------- |
| main    | texto           | char[1000] | Entrada                    |
| main    | totalCaracteres | int        | Salida                     |
| main    | totalPalabras   | int        | Salida                     |
| main    | totalEspacios   | int        | Salida                     |
| main    | totalLineas     | int        | Salida                     |
| main    | enPalabra       | int        | Auxiliar (control interno) |
ㅤㅤ

1. Inicialice el programa con:

#include <stdio.h> 

#include <string.h>

#include <ctype.h>

Use estos tres #include que:

🔴 #include <stdio.h>: Permite usar funciones básicas de entrada y salida, como mostrar texto (printf) y leer texto (fgets).

🟠 #include <string.h>: Ofrece herramientas para trabajar con cadenas de texto (aunque no se usen directamente aquí, es buena práctica incluirla al manipular texto).

🟡 #include <ctype.h>: Proporciona funciones para analizar caracteres, como isspace() para identificar espacios en blanco.


2. Dentro de la función main(), declaro varias variables enteras para almacenar los resultados del análisis y una cadena de caracteres para guardar el texto ingresado por el usuario:


char texto[1000];

int totalCaracteres = 0;

int totalPalabras = 0;

int totalEspacios = 0;

int totalLineas = 1; // Inicializamos en 1

int enPalabra = 0;   // Bandera (flag)

3. Informe al usuario como debe ingresat el texto y como finalizar la entrada mediante un printf.

printf("Escribe el texto que deseas analizar, luego, presiona Ctrl+D o Ctrl+Z y luego Enter para finalizar la entrada.\n");

4. Use un bucle "while" junto con la funcion "fgets" para leer texto que el usuario ingreso linea por linea:  

while (fgets(texto, sizeof(texto), stdin) != NULL) {
       
// Procesar cada línea de texto
    
}

-sizeof(texto): El tamaño máximo del buffer para evitar desbordamientos.

-stdin: El flujo de entrada estándar (normalmente el teclado).

5. Dentro del bucle while, para cada línea leída, repeti varias veces sobre cada carácter de esa línea con un bucle for:

for (int i = 0; texto[i] != '\0'; i++) {

// Analizar el carácter texto[i]

}

El bucle for comienza en el primer carácter de la línea (i = 0) y continúa hasta que encuentra el carácter nulo de terminación (\0)

6. Dentro del bucle for, se cuentan los caracteres que no son el carácter de nueva línea (\n):

if (texto[i] != '\n') {

totalCaracteres++;

}

7. Luego, verifique si el carácter actual es un espacio en blanco utilizando la función isspace() de la biblioteca ctype.h:

if (isspace(texto[i])) {
totalEspacios++;

enPalabra = 0; // Ya no estamos dentro de una palabra

if (texto[i] == '\n') {
   
   totalLineas++;
 
 }
}

Si "isspace(texto[i])" devuelve un valor verdadero (diferente de cero), significa que el carácter actual es un espacio en blanco, se incrementa el contador totalEspacios y establezco la bandera enPalabra a 0 porque un espacio marca el final de una palabra, si el espacio en blanco es específicamente un carácter de nueva línea (\n), se incrementa el contador totalLineas.

8. La lógica para contar palabras se basa en la transición de un espacio en blanco a un carácter que no es un espacio en blanco:


else if (!isspace(texto[i]) && enPalabra == 0) {

totalPalabras++;

enPalabra = 1; // Ahora estamos dentro 

de una palabra

}

Esta condición se cumple si el carácter actual no es un espacio en blanco (!isspace(texto[i])) y la bandera enPalabra es 0 (lo que significa que no estoy en una palabra para antes de este carácter). Cuando se encuentre el primer carácter no blanco después de un espacio (o al principio de la entrada), se concidera que estoy comenzado una nueva palabra, por lo que incremento totalPalabras y establezco enPalabra a 1.

9. Una vez que se han leído y analizado todas las líneas de entrada (el bucle while termina), se muestran las estadísticas calculadas:

printf("\nEstadísticas del texto:\n");

printf("Total de caracteres (excluyendo \\n): %d\n", totalCaracteres);
    
printf("Total de palabras: %d\n", totalPalabras);
    
printf("Total de espacios en blanco: %d\n", totalEspacios);
    
printf("Total de líneas: %d\n", totalLineas);

### Pseudocodigo ⚡

inicio

Leer: nombre_archivo como cadena de 100 caracteres

Leer: archivo_salida como archivo

Leer: promedio como real y asignar 7.8

Leer: frecuencia_a como entero y asignar 15

Leer: texto_modificado como cadena y asignar "Este es el texto con modificaciones."

imprimir: "Ingresa el nombre del archivo de salida: "

leer: nombre_archivo

proceso: abrir archivo_salida con nombre_archivo en modo escritura

condición: si archivo_salida es nulo entonces

imprimir: "Error al abrir el archivo ", nombre_archivo

terminar: programa con error

fin condición


proceso: escribir en archivo_salida "Estadísticas:"

proceso: escribir en archivo_salida "Promedio: ", promedio

proceso: escribir en archivo_salida "Frecuencia de Vocales:"

proceso: escribir en archivo_salida "Frecuencia de 'a': ", frecuencia_a

proceso: escribir en archivo_salida "Texto Modificado:"

proceso: escribir en archivo_salida texto_modificado

proceso: cerrar archivo_salida

imprimir: "Los resultados han sido guardados en el archivo ",

nombre_archivo

fin
