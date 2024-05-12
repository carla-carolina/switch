
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
EJERCITACIÓN (Level 2.2):

Desarrollar una calculadora con 5 operaciones:

1. SUMA: Debe pedir 4 números por teclado y mostrar
tanto lo ingresado como el resultado.
2. RESTA: Debe pedir 3 números por teclado y mostrar
tanto lo ingresado como la resta sucesiva.
3. MULTIPLICACIÓN: Debe pedir 3 números por teclado
y mostrar tanto lo ingresado como el producto.
4. DIVISIÓN: Pedir por teclado 2 números, en caso de
ingresar 0 para el divisor mostrar un mensaje en
pantalla.
5. POTENCIA: Debe pedir base y exponente. Mostrar
los datos ingresados y el resultado.

*/


int main (){

    printf("\n\n### ->CALCULADORA<- ###\n\n\n");

     int opcion, i;

     float suma, diferencia, producto, cociente, potencia;
     float valor1, valor2, valor4, valor3;

     //INPUT
     printf("Por favor, seleccione abajo la operacion que desea realizar, ingresando por teclado, el valor indicado entre parentesis:\n\n");
     printf("SUMA: (1)\nRESTA: (2)\nMULTIPLICACION: (3)\nDIVISION: (4)\nPOTENCIA: (5)\n\n");
     scanf("%d", &opcion);

     if(opcion < 1 || opcion > 4){
        printf("La opcion ingresada '%d', no correponde a ninguna de las exhibidas en pantalla. El programa sera finalizado.\n", opcion);
     }else{
         switch(opcion){
             case 1: // SUMA
                 i = 0;
                 suma = 0;
                 valor1 = 0;
                 while( i < 4){
                    printf("\nIngrese el %do. valor: ", i+1);
                    scanf("%f", &valor1);
                    suma = suma + valor1;
                    i++;
                 }

                 printf("\nEl resultado de la suma fue: %.2f\n\n\n", suma);

                 break;
             case 2: // DIFERENCIA
                i = 0;
                diferencia = 0;
                valor1 = 0;
                 while( i < 3){
                    printf("\nIngrese el %do. valor: ", i+1);
                    scanf("%f", &valor1);
                    if( i == 0){
                        diferencia  = valor1;
                    }else{
                        diferencia = diferencia - valor1;
                    }

                    i++;
                 }

                 printf("\nEl resultado de la diferencia fue: %.2f\n\n\n", diferencia);
                break;
             case 3: // MULTIPLICACIÓN
                break;
             case 4: // DIVISIÓN
                break;
             case 5: // POTENCIA
                break;
         }
     }

     //OUTPUT





    printf("\n\n\n~~FIN DE EJECUCION~~\n\n");


    return 0;
}
