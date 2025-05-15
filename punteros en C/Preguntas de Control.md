# Preguntas de Control ⚡🧠



## 1. ¿Qué almacena un puntero?
   *B)*  La dirección de memoria de otra variable.
   Un puntero almacena la dirección en memoria donde se encuentra otra variable. No guarda directamente su valor (aunque se puede acceder a él mediante desreferenciación).



## 2. ¿Cuál es el operador para obtener la dirección de una variable?

*B)* `&`
   El operador `&` se utiliza para obtener la dirección de memoria de una variable, por ejemplo: `int *ptr = &x;`.



## 3. ¿Cómo se llama la operación de acceder al valor apuntado por un puntero?


 *B)* 
   El operador `*` permite acceder al valor almacenado en la dirección que contiene el puntero. Ejemplo: `*ptr` accede al valor apuntado por `ptr`.


## 4. En el contexto de punteros, describa brevemente qué significa ‘paso por referencia’.


   - Significa pasar la dirección de una variable a una función, permitiendo que la función modifique directamente el valor de la variable original. Se logra usando punteros. Esto es diferente del "paso por valor", donde se pasa una copia del valor.



## 5. Si `ptr` es un puntero a `int`, ¿qué hace `ptr = 5;`?
   
   *A)*  Asigna 5 al puntero mismo.**
   Esta instrucción asigna la dirección de memoria `5` a `ptr`, lo cual normalmente no es válido o útil, ya que `5` no suele ser una dirección válida en el espacio de memoria accesible del programa. Para asignar el valor 5 al entero apuntado, se debe usar `*ptr = 5;`.



