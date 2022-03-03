#include <stdio.h>

int main(void) {// Inicia el programa
  float PRO = 0;// Crea una variable y asigna el dato
  printf ("Ingrese el promedio del alumno: ");// imprime una informacion en la pantalla
  scanf ("%f" , &PRO);// pide el dato
  if (PRO >= 6)// condicion con operacion relacional mayor o igual a 6
printf ("\nAprobado");// imprime el resultado
  return 0;
}
