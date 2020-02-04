//Programa similiar a punt8.cpp que rellena una array de valores
//float  y lo imprime. Utiliza notaci¢n de puntero para acceder al array y
//efect£a una reserva din mica de memoria para valores tipo float mediante
//malloc() de stdlib.h
#include <stdio.h>
#include <conio.c>
#include<stdlib.h>
void main(void)
  {
    int i, n;
    float *mat;      //defino el array con puntero
    clrscr();
    printf("\n¨De cuantos elementos desea el array?: ");
    scanf("%d", &n);
    clrscr();
    //Realizo una reserva din mica de memoria para que quepa el array:
    mat =(float*) malloc(n*sizeof(float));
    printf("Llenamos el array:\n");
    for(i=0; i<n; i++)
       scanf("%f", mat+i); //sin &
    printf("\nImprimimos el resultado(float):\n");
    for(i=0; i<n; i++)
       printf("\n%g", *mat++);
    getch();
	getch();
  }