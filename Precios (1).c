80#include <stdio.h>

 int main(void);// Inicia el programa
  {
float PRE, NPR;// Creacion de variable y asignación
printf("ingresa el precio del producto: ");// Imprime información en la pantalla
scanf("%f", &PRE);// Espera un dato para asignarlo a la variable PRE
if(PRE  <= 1500)// Condicion con una operación relacional
{
NPR = PRE * 1.8;// Multiplicacion de la variable por 1.8
printf("\nNuevo precio: %8.2f", NPR);// imprime el resultado de la operación
else {// Si la condicion del if es falsa, realiza lo siguiente
printf("\nDebes ingresar un precio menor o igual a 1500");// Imprime información en la pantalla
return 0;// termina la función
}
    }
