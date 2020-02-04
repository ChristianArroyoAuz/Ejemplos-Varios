//Presenta un array de punteros y un puntero a puntero. Llena un array
//y lo imprime como tal.

#include <stdio.h>
#include <conio2.h>
#include <stdlib.h>
 main()
{
	int i,j;
	int *p[4];  //array de punteros//
	int **px=p; //px es un puntero a un puntero//
	
   	//Reservo mem para el array de punteros
       for (i=0; i<4; i++)      
        px[i] =(int *)malloc(sizeof(int));
    printf ("Introduzca 16 valores enteros:\n");
    for (i=0; i<4; i++) 
     for (j=0; j<4; j++)
		  scanf ("%d", &px[i][j]);
       
	//imprimimos
    for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		//printf("%7d",px[i][j]);     //Imprime como array  "%7d" deja 7 blancos
		printf("%7d", *(*(px+i)+j));  //Imprime como puntero
		printf("\n");
	}
	getch(); getch();
}