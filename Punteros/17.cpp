/* Imprime los valores de una matriz con punteros*/
#include "stdio.h"
#include "conio.c"
#define FILAS 3
#define COLUMNAS 2
void main()
{
	int i, j;
	char mat[][COLUMNAS]=  {{1,2},{20,4},{5,6}};

	clrscr();
	puts("Imprimimos como array:");
    for(i=0; i<FILAS; i++)
      {
        for(j=0; j<COLUMNAS; j++)
           printf("    %d", mat[i][j]);
           printf("\n");
      }
    puts("\nComo puntero a array:\n" );

	for(i=0; i<FILAS*COLUMNAS; i++)   //OJO AL BUCLE: Array monodimensional
		printf("%d\n", (*mat)[i]);

	puts("\nImprimimos utilizando doble notacion de punteros:");
    for(i=0; i<FILAS; i++)
      {
        for(j=0; j<COLUMNAS; j++)
		  printf("    %d", *(*(mat+i)+j));
          printf("\n");
      }
	getch();

}





