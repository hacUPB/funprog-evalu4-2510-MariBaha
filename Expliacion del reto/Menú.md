# Desarrollo del Menú 🗒️

### Objetivo

El objetivo era crear un menú que permita al usuario:

1. seleccionar diferentes opciones.

2. leer la opción que el usuario ingresa.

3. Permitirle al usuario repetir los pasos anteriores hasta que decida aplicar la opcion "salir"

### ¿Que fue lo que hice?

1. Inicialice el programa con:

 #include <stdio.h>

int main() {

return 0;

}

Para luego darle una variable para la elección del usuario: int variante

2. Como quería que el menú se muestre una y otra vez hasta que el usuario quiera salir del programa, use un bucle do-while. Use este tipo de bucle do-while ya que garantiza que el bloque de código dentro del bucle se ejecute al menos una vez: 
 
do {
    
// Mostrar el menú  

// Leer la elección del usuario

// Procesar la elección del usuario

} while (variante != 6);

3. Dentro del bucle do, lo primero que hago es mostrar las diferentes opciones al usuario usando la función printf. Utilizo caracteres de escape como \n para crear nuevas líneas y que el menú se vea ordenado:

printf("\n=== Menú Principal ===\n");

printf("1. Calcular total de líneas\n");

printf("2. Calcular total de palabras\n");

printf("3. Calcular total de caracteres\n");

printf("4. Busca una palabra específica\n");

printf("5. Guarda resultados en un archivo\n");

printf("6. Salir\n");

printf("Selecciona una variante: ");

4. Después de mostrar el menú, necesitaba que el usuario ingrese su elección, asi que use la función "scanf" para leer un entero del teclado y almacenarlo en la variable:

scanf("%d", &variante);

5. Para cuando ya con la eleccion del usuario almacenada en "variante", use "switch" para  ejecutar diferentes acciones según el valor de esa variable.

switch (variante) {

case 1:
        printf("Calcular total de líneas\n");
        break;

case 2:
        printf("Calcular total de palabras\n");
        break;

// ... casos para las opciones 3, 4 y 5

case 6:
        printf("Saliendo del programa...\n");
        break;

default:
        
printf("variante no valida. Vuelva a intentar.\n");

}