#include <stdio.h>

int main(void) {// Inicia el programa
  float PRE = 0;// Creacion de variable y asignación
  float NPR = 0;// Creacion de variable y asignación
  printf("Ingrese el precio del producto: ");// Imprime información en la pantalla
  scanf ("%f", &PRE);// Espera un dato para asignarlo a la variable PRE
    if (PRE  < 1500);// Condicion con una operación relacional
  NPR = PRE * 1.11;// Multiplicacion de la variable por 1.11
printf ("Nuevo precio del producto: %8.2f", NPR);// imprime el resultado de la operación
   return 0;// termina la función
}