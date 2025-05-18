#include <stdio.h>
#include <string.h>

int main() {
  char nombre_archivo[100];
  FILE *archivo_salida;

  // Pedir al usuario el nombre del archivo de salida
  printf("Ingresa el nombre del archivo de salida: ");
  scanf("%99s", nombre_archivo); // Limitamos la lectura para evitar desbordamiento del buffer

  // Abrir el archivo en modo escritura
  archivo_salida = fopen(nombre_archivo, "w");

  // Verificar si la apertura del archivo fue exitosa
  if (archivo_salida == NULL) {
    printf("Error al abrir el archivo %s\n", nombre_archivo);
    return 1; // Mostrar que hubo un error
  }

  // Datos de ejemplo 
  double promedio = 7.8;
  int frecuencia_a = 15;
  char texto_modificado[] = "Este es el texto con modificaciones.";

  // Escribir las estadísticas en el archivo
  fprintf(archivo_salida, "Estadísticas:\n");
  fprintf(archivo_salida, "Promedio: %.2f\n", promedio); // Ejemplo de estadística

  // Escribir la frecuencia de vocales en el archivo
  fprintf(archivo_salida, "\nFrecuencia de Vocales:\n");
  fprintf(archivo_salida, "Frecuencia de 'a': %d\n", frecuencia_a); // Ejemplo para la vocal 'a'
  // Aquí se puede agregar la frecuencia de las demás vocales

  // Escribir el texto modificado en el archivo
  fprintf(archivo_salida, "\nTexto Modificado:\n");
  fprintf(archivo_salida, "%s\n", texto_modificado);

  // Cerrar el archivo
  fclose(archivo_salida);

  printf("Los resultados han sido guardados en el archivo '%s'\n", nombre_archivo);

  return 0; // Mostrar que el programa se ejecutó correctamente
}