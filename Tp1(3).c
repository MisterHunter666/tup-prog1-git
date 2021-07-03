#include <stdio.h>

main () {

  int iCantidad = 0;
  char cLetra = "";
  char cSiguienteLetra = "";
  char cProxima = "";

printf ("Ingrese la primer letra: ");
scanf ("%c", &cLetra);

  printf ("\n Ingrese una cantidad de letras: ");
  scanf ("%i", &iCantidad);

  iCantidad = iCantidad - 1;
  for (int i = 0; i < iCantidad; i++)

  {
    printf ("\n Actual: %c, \n cual es la siguiente letra??:", cLetra + i);   //ACTUAL
    scanf (" %c", &cSiguienteLetra);

    cProxima = cLetra + i + 1;
    if ( cSiguienteLetra != cProxima )
    {
      printf ("\n Se finalizo porque la letra es incorrecta ");
      printf (" \n La siguiente es: %c \n", cLetra + i + 1);    //SIGUIENTE
      break;
    }
  }
   
  printf ("\n Fin del programa");

  }