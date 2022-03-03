
#include <stdio.h>
#include <math.h>
/* 1. Inicia con cualquier entero positivo.
2. Si el número es par, divídelo entre 2. Si es impar, multiplícalo por 3 y agrégale 1.
3. Obtén sucesivamente números enteros repitiendo el proceso.
Al final obtendrás el número 1. Por ejemplo, si el entero inicial es 45, la secuencia
es la siguiente: 45, 136, 68, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1.. */

int main(void) // Inicia el programa
{
  
int NUM; // Creacion de variable y asignacion del dato
printf("Ingresa el número para calcular la serie: ");// Imprime la información en la pantalla  
scanf("%d", &NUM); // Pide el dato
if (NUM > 0)// Condicion con operación relacional
{
  
printf("\nSerie de ULAM\n");// Imprime la información en la pantalla
printf("%d \t", NUM); // Imprime la información en la pantalla
while (NUM != 1) // Repite el bloque mientras la operación sea verdadera
{
if ("pow", (-1, NUM) > 0)//
NUM = NUM / 2;// Operación que divide el numero entre 2
else// Si la condicion anterior no es verdadera, se realiza la siguiente
NUM = NUM * 3 + 1;// Operacion que multiplica y suma numero de la variable
printf("%d \t", NUM);// Imprime la información en la pantalla
}
}
else// Si la condicion anterior no es verdadera, se realiza la siguiente
printf("\n NUM debe ser un entero positivo");// Imprime la información escrita en pantalla
  
  return 0;// Termina el programa
}