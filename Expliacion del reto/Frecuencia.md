# Desarrollo de la frecuencia ⚡🔠

## ¿Como lo hice? 🤔

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
