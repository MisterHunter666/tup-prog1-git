#include <stdio.h> 

int main() {

int iAncho;
int iAlto;
int iProfundidad;
int iVolumen;
int iArea;

printf ("Introduzca lo que vale el ancho:\n");
scanf ("%i", &iAncho);

printf ("Introduzca lo que vale el alto:\n");
scanf ("%i", &iAlto);

printf ("Introduzca lo que vale la profundidad:\n");
scanf ("%i", &iProfundidad);

iVolumen =  iAncho * iAlto * iProfundidad;

printf ("El volumen da\t");
printf ("%i", iVolumen);

iArea = 2*iAlto * (iAncho + iProfundidad) + 2*iAncho*iProfundidad;

printf ("\nEl area da\t");
printf ("%i", iArea);

return 0;

}



