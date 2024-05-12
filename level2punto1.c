#include <stdio.h>
#include <stdlib.h>


/*EJERCITACIÓN (Level 2):

1. Crear un programa que muestre un menú con opciones
“Archivo”, “Buscar”, “Guardar” y “Salir” (1 al 4), en caso
de que no se introduzca una opción correcta se notificará
por pantalla.
*/

int main () {

    printf("\n\n+++MOSTRAR MENU+++\n\n\n");

    int opcion = 0;

    printf("Elija dentre las siguientes opciones, ingresando el valor numerico indicado en los parentesis y luego accionando la tecla enter:\n\n");
    printf("  ARCHIVO:--(1)-- \n");
    printf("   BUSCAR:--(2)-- \n");
    printf("  GUARDAR:--(3)-- \n");
    printf("    SALIR:--(4)-- \n\n");
    //INPUT
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            printf("\nLa opcion seleccionada (%d) corresponde a: ARCHIVO.\n\n", opcion);
            break;
        case 2:
            printf("\nLa opcion seleccionada (%d) corresponde a: BUSCAR.\n\n", opcion);
            break;
        case 3:
            printf("\nLa opcion seleccionada (%d) corresponde a: GUARDAR.\n\n", opcion);
            break;
        case 4:
            printf("\nLa opcion seleccionada (%d) corresponde a: SALIR.\n\n", opcion);
            break;
        default:
            printf("\nLa opcion seleccionada (%d) NO CORRESPONDE a ninguna de las opciones mencionadas.\n\n", opcion);
            break;
    }

    printf("\n\n\n^^^FIN DE EJECUCION.^^^\n\n\n");

    return 0;
}
