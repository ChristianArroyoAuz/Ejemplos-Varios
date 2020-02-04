//Reserva de memoria de modo dinamico: malloc(). Aumenta memoria reservada mediante
//función  realloc();

#include "stdio.h"
#include "stdlib.h"
#include "conio.c"
#include "string.h"

void main()
{
	const int BYTES =  8;
	char *p;
	clrscr();

	//Asignar espacio para una cadena de caracteres//
	p = (char *)malloc (BYTES *sizeof(char));

	//Copiar la cadena de caracteres en el espacio asignado//
	strcpy (p, "abcdefg");

	//Reasignar el bloque para que pueda contener mas caracteres//
	if ((p !=NULL)) //Si hay un error...
	     p=(char*) realloc (p, (BYTES + 4)*sizeof(char));
    //aumentamos el tamaño de la cadena, concatenando otra:
    strcat(p, "X YZ");

	if ((p !=NULL))
	{
		printf("Bloque reasignado\n");
		//Escrbir la cadena resultante//
		printf ("%s\n",p);
		//Liberar el espacio de memeoria//
		free(p);
		printf("\n El bloque ha sido liberado\n");
	}
	else
	{
		printf ("La reasignaci¢n no ha sido posible\n");
		printf ("El espacio ocupado por el bloque ha sido liberado");
	}
	getch();
}