#include <stdio.h>

main () {

    int iAnio;
    int iMes;
    int iDia;
    int iDiasfaltantes;

    printf ("Ingrese un anio: ");
    scanf ("%d", &iAnio);

    printf ("Ingrese un mes: ");
    scanf ("%d", &iMes);

    printf ("Ingrese un dia: ");
    scanf ("%d", &iDia);

    {
    if (iAnio > 2021) 
        printf ("No es valido\n");
    if (iMes > 12) 
        printf ("No es valido\n");
    if (iDia > 31) 
        printf ("No es valido\n");
        return 0;
    }
    
     if ( (iAnio %4 == 0)  && (iAnio %100 != 0) || (iAnio %400 == 00) ) {
      ( 29 >= iDia && iMes == 2) || printf ("Es un anio bisiesto\n");
    }
    else {
        printf ("No es bisiesto\n");
      }

   {
     if (iMes == 1)
    {
      iDiasfaltantes = 31 - iDia;
    printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }
    else if (iMes == 2)
    {
      iDiasfaltantes = 29 - iDia;
      printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }

    else if (iMes == 3)
    {
      iDiasfaltantes = 31 - iDia;
      printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    } 

    else if (iMes == 4)
    {
       iDiasfaltantes = 30 - iDia;
       printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }

    else if (iMes == 5)
    {
      iDiasfaltantes = 31 - iDia;
        printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }

    else if (iMes == 6)
    {
      iDiasfaltantes = 30 - iDia;
         printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }

    else if (iMes == 7)
    {
      iDiasfaltantes = 31 - iDia;
          printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }

    else if (iMes == 8)
    {
       iDiasfaltantes = 31 - iDia;
           printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }

    else if (iMes == 9)
    {
      iDiasfaltantes = 30 - iDia;
            printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }
    
    else if (iMes == 10)
    {
      iDiasfaltantes = 31 - iDia;
            printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }

    else if (iMes == 11)
    {
      iDiasfaltantes = 30 - iDia;
            printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }

    else {
      iDiasfaltantes = 31 - iDia;
             printf ("La cantidad de dias que faltan son %d", iDiasfaltantes);
    }
    
    }

    }

  