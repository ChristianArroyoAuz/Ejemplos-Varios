#include <conio.c>
#include <stdlib.h>
#include <stdio.h>
int **mat;
void main()
  {

     int i=0,j, n, m;
     clrscr();
     printf("Cuantos elemntos tendr  la matriz?\n");
     scanf("%d", &n);
     scanf("%d", &m);
     mat=(int **)malloc(sizeof(int)*m); //doble puntero
     puts("\nLlenamos loe elementos:");
     for(i=0; i<n; i++)
      {
        mat[i] = (int *)malloc(100);  //array de punteros
        for(j=0; j<m; j++)
          scanf("%d", (*(mat+i)+j));
      }
     printf("\nImprimimos el resultado:\n");
     for(i=0; i<n; i++)
       {
        for(j=0; j<m; j++)
         printf("  %d", *(*(mat+i)+j));   //Como doble puntero
       //  printf("  %d", *(mat[i]+j));     //Como array de puntteros
        // printf("   %d", mat[i][j]);      //Como array bidimensional
        printf("\n");                     
       }
     getch();
}