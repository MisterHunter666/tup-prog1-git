#include <stdio.h>


int main () {

int i;
int iComputadoras;
int iPrecio;
int iHoras;
int iMonto; 
int iHoratotal;
int iHoramenoruso;
int iPcmenoruso;


    printf ("Ingresar la cantidad de computadoras:\n");
    scanf ("%i", &iComputadoras);


    printf ("Ingresar el precio de la hora de uso\n");
    scanf ("%i", &iPrecio);

    iHoratotal = 0;
    iHoramenoruso = 9999999;

     for (int i = 1; i <= iComputadoras; i++) {
        printf ("computadora %d:\t", i);
        scanf ("%i", &iHoras);
        printf ("la computadora %d ", i);
        printf ("usa %i horas\n", iHoras);
        iHoratotal = iHoratotal + iHoras;
        printf ("las horas totales son %i\n", iHoratotal);
    
    if (iHoramenoruso > iHoras) {
        iHoramenoruso = iHoras;
        iPcmenoruso = i;
        
    }

    }


    printf ("\nel menor uso tuvo un total de %i horas\n", iHoramenoruso);
    printf ("y corresponde a la computadora %i\n", iPcmenoruso);
    
    
    iMonto = iPrecio * iHoratotal;

    printf ("\nEl monto total es\t");
    printf ("%i", iMonto);

    

    return 0;

}
