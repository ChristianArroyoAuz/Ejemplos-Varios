//Programa que utiliza un puntero a una matriz,
//imprime sus elementos y las direcciones correspondientes utilizando
//notacion de punteros
#include "stdio.h"
#include <conio.c>
void main(){
   int *p, i;
   int mat[4] ={1, 2, 3, 4};
   p=mat;
   clrscr();
   for(i=0; i<=3; i++)
     {
	printf("\nmat[%d] = %d ",i, *p++);
	printf("\tDirecci¢n: %x",p);
   }
   getch();
}