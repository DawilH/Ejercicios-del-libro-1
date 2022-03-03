#include <stdio.h>

int main(void) {// Inicia el programa
  float PRO = 0;//Crea la variable y asigna el nombre del dato
  printf ("Ingrese el promedio del alumno: ");// Imprime la información en la pantalla
  scanf ("%f" , &PRO);// Pide un dato en la pantalla
  if (PRO >= 6)// Condicion con operacion relacional de mayor o igual a 6
printf ("\nAprobado");// imprime la informacion en pantalla la condición del if es verdadera
  else {  // Si la condicion del if es falsa, realiza lo siguiente
    printf ("\nReprobado");// Imprime la informacion en la pantalla ya que la condicion mayor o igual a 6 es falsa
  return 0;// termina la función
}
