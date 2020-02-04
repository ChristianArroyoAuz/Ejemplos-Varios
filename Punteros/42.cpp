//Array de punteros. Nos pide el n£mero de filas y columnas
#include <stdio.h>
#include <conio.c>
#include <stdlib.h>
int *mat[1];   //mat[fil][col] ---> *mat[fil]
void main()
  {
     int i, j, fil, col;
     clrscr();
     puts("N£mero de filas?");
     scanf("%d", &fil);
     puts("Numero de columnas?");
     scanf("%d", &col);
     puts("Rellenamos el array:");
     for(i=0; i<fil; i++)
       mat[i]=(int *)malloc(col*2); //reservo memoria
     for(i=0; i<fil; i++)
	   for(j=0; j<col; j++)
	     scanf("%d", (mat[i]+j));
     printf("\nImprimimos el resultado:\n");
     for(i=0; i<fil; i++)
      {
	   for(j=0; j<col; j++)
	    printf("%d\t",*(mat[i]+j));
       printf("\n");
      } 
     getch(); getch();
  }