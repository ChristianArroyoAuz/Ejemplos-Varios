//Programa que utiliza un puntero a una matriz,
//imprime sus elementos y las direcciones correspondientes utilizando
//notaci¢n de punteros

#include "stdio.h"
#include <conio.c>
void main(){
   int  i;
   int mat[4] ={1, 2, 3, 4};
   clrscr();
   for(i=0; i<=3; i++)
     {
	printf("\nmat[%d] = %d ",i, *(mat+i));
	printf("\tDirecci¢n: %x",mat+i);
   }
}