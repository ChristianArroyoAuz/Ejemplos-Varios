/*************** Array dinamico de una dimensión ***************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
void main()
{
  int *pa = NULL;
  unsigned int nbytes = 0, Ok = 0, nElementos = 0, i = 0;
  do
    {
     printf("Número de elementos del array: ");
     Ok = scanf("%u", &nElementos);
     fflush(stdin);
    }while(!Ok );
  nbytes = nElementos * sizeof(int);
  if ((pa = (int *)malloc(nbytes)) == NULL ) //tratamiento de errores
    {
      printf("Insuficiente espacio de memoria\n");
      exit(-1);
    }
  printf("Se han asignado %u bytes de memoria\n", nbytes);

  /* Inicializar el array a cero */
  for ( i = 0; i < nElementos; i++ )
    pa[i] = 0;

  /* Operaciones */

  free(pa);  //liberación de memoria.
  getch();
}