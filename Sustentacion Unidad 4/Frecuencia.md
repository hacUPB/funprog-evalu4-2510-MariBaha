# Desarrollo de la frecuencia ⚡🔠

## ¿Como lo hice? 🤔

## Proposito general

La frecuancia esta diseñada para leer un texto ingresado por el usuario desde la entrada estándar y contar la frecuencia de aparición de cada vocal (a, e, i, o, u) sin distinguir entre mayúsculas y minúsculas.

El flujo del programa es: 

✅Solicita al usuario que escriba un texto.

✅Lee carácter por carácter usando getchar() hasta que se presione Ctrl+D o Ctrl+Z.

✅Convierte cada carácter a minúscula para estandarizar el análisis.

✅Verifica si es una vocal, y si lo es, incrementa el contador correspondiente.

✅Al finalizar la lectura, imprime la frecuencia de cada vocal.

### Tabla de variables

| Función | Variable | Tipo   | Rol     |
| ------- | -------- | ------ | ------- |
| main  | c     | char | Entrada |
| a     | int    | Salida |         |
| e     | int    | Salida |         |
| i     | int    | Salida |         |
| o     | int    | Salida |         |
| u     | int    | Salida |         |


1. Inicialice con: 

#include <stdio.h>

#include <ctype.h>   // Para tolower, que convierte letras mayúsculas a minúsculas.


2. Declaro con char una variable "c" para almacenar caracteres, luego declaro 5 variables contadoras = 0.

char c;

int a = 0, e = 0, i = 0, o = 0, u = 0;

3. Le digo al usuario como ingresar el texto y finalizarlo.

printf("Ingresa el texto (Ctrl+D para terminar en Linux/Mac, Ctrl+Z en Windows):\n");

4. Aqui hago que entre en un bucle que lee carácter por carácter con getchar() hasta encontrar EOF (fin de archivo), que el usuario marca manualmente (Ctrl+D o Ctrl+Z).

while ((c = getchar()) != EOF) {

Y luego tolower convierte c a minuscula para unificar.

c = tolower(c);

5. Con este codigo reviso si el caracter es una vocal, y si lo es aumenta el contador correspondiente.

switch (c) {

case 'a': a++; break;
    
case 'e': e++; break;
        
case 'i': i++; break;
        
case 'o': o++; break;
        
case 'u': u++; break;

}

6. Aqui una vez finalizada la lectura del texto el programa muestra cuantas veces aparecio cada vocal.

printf("\nFrecuencia de vocales:\n");

printf("a: %d\n", a);

printf("e: %d\n", e);

printf("i: %d\n", i);

printf("o: %d\n", o);

printf("u: %d\n", u);

### Pseudocodigo⚡

inicio

declarar: c como carácter

declarar: a, e, i, o, u como enteros y asignar 0

imprimir: "Ingresa el texto (Ctrl+D para terminar en Linux/Mac, Ctrl+Z en Windows):"

condicon: mientras no se alcance el fin del archivo (EOF) hacer
    
leer: un carácter y guardarlo en c

proceso: convertir c a minúscula

condición: según el valor de c

caso 'a': proceso incrementar a en 1

caso 'e': proceso incrementar e en 1

caso 'i': proceso incrementar i en 1

caso 'o': proceso incrementar o en 1

caso 'u': proceso incrementar u en 1

fin condición

fin mientras

imprimir: "Frecuencia de vocales:"

imprimir: "a: ", a

imprimir: "e: ", e

imprimir: "i: ", i

imprimir: "o: ", o

imprimir: "u: ", u

fin
