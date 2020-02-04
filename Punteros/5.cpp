// Programa que emplea un array de punteros
#include <stdio.h>
#include <conio.c>
#include <stdlib.h>
//int mat[?][25]
int *mat[25];//MATRIZ DE PUNTEROS....SE MANTIENE LA PRIMERA DIMENSION  y se obvia la sgunda
void main()
  {
     int i=0, j, n, m;
     clrscr();
     printf("Cuantos filas tendra  la matriz?\n");
     scanf("%d", &n);
     printf("Cuantas columnas tendra  la matriz?\n");
     scanf("%d", &m);
     *mat= (int *)malloc(n*sizeof(int));
     puts("\nLlenamos loe elementos:");
     for(i=0; i<n; i++)
       {
         mat[i] = (int *)malloc(sizeof(int)*m );  //Memoria para m elementos
         for(j=0; j<m; j++)
             scanf("%d",(*(mat+i)+j));
        }
     printf("\nImprimimos el resultado:\n");
     for(i=0; i<n; i++)
      {
        for(j=0; j<m; j++)
          printf("  %d",*(*(mat+i)+j));
        printf("\n");
      }
     getch(); getch();
}
