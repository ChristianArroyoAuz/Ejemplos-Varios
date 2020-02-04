//Programa que rellena una array y lo imprime. En la segunda parte
//utiliza notaci¢n de punteros para referirse al array y reliza lo mismo,
//efectuando una reserva din mica de memoria: malloc() de stdlib.h
#include <stdio.h>
#include <conio.c>
#include<stdlib.h>
/*int mat[100],i, n;
void main(void)
  {
    clrscr();
    printf("\n¨De cuantos elementos desea el array?: ");
    scanf("%d", &n);
    clrscr();
    printf("Llenamos el array:\n");
    for(i=0; i<n; i++)
       scanf("%d", &mat[i]);
    printf("\nImprimimos el resultado:\n");
    for(i=0; i<n; i++)
    printf("\n%d", mat[i]);
    getch();
  } */
//SEGUNDA PARTE:
void main(void)
  {
    int i, n , *mat;      //defino el array con puntero
    clrscr();
    printf("\n¨De cuantos elementos desea el array?: ");
    scanf("%d", &n);
    clrscr();
    //Realizo una reserva din mica de memoria para que quepa el array:
    mat =(int*) malloc(n*sizeof(int));
    printf("Llenamos el array:\n");
    for(i=0; i<n; i++)
       scanf("%d", mat+i);
    printf("\nImprimimos el resultado:\n");
    for(i=0; i<n; i++)
       printf("\n%d", *mat++);
    getch();
  }