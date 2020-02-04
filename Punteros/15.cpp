/* Muestra el uso de punteros */
#include "stdio.h"
#include "conio.c"
void main()
{
	int x=4,  y=7;
	int *px,  *py;         //Variables de punteros//
	clrscr();

	printf ("x es %d, y es %d. \n", x,y);
	px = &x;		//Pone la direcci¢n de los numeros
	py = &y;		//en punteros//
	*px = *px +10;		//Añade constantes a los contenidos
	*py = *py+10;		//de los punteros//
	printf ("x = %d, y = %d. \n",*px,*py);
	getch();
}