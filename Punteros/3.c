/************** Array dinamico de dos dimensiones **************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>

void main() 
{
  int **ppa = NULL;
  unsigned int nFilas = 0, nCols = 0;
  unsigned int Ok = 0, f = 0, c = 0;

  do
  {
    printf("Número de filas del array:    ");
    Ok = scanf("%u", &nFilas);
    fflush(stdin);
  }
  while ( !Ok );
  do
  {
    printf("N£mero de columnas del array: ");
    Ok = scanf("%u", &nCols);
    fflush(stdin);
  }
  while ( !Ok );

  /* Asignar memoria para el array de punteros */
  if ((ppa = (int **)malloc(nFilas * sizeof(int *))) == NULL)
  {
    printf("Insuficiente espacio de memoria\n");
    exit(-1);
  }

  /* Asignar memoria para cada una de las filas */
  for (f = 0; f < nFilas; f++)
  {
    if ((ppa[f] = (int *)malloc(nCols * sizeof(int))) == NULL)
    {
      printf("Insuficiente espacio de memoria\n");
      exit(-1);
    }
  }

  /* Inicializar el array a cero */
  for ( f = 0; f < nFilas; f++ )
    for ( c = 0; c < nCols; c++ )
      ppa[f][c] = 0;

  /* Operaciones */
  for ( f = 0; f < nFilas; f++ )
  {
    for ( c = 0; c < nCols; c++ )
      printf("%d  ", ppa[f][c]);
    printf("\n");
  }

  /* Liberar la memoria asignada a cada una de las filas */
  for ( f = 0; f < nFilas; f++ )
    free(ppa[f]);
  /* Liberar la memoria asignada al array de punteros */
  free(ppa);
  getch();
}