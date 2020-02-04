/* Lectura y paso a minusculas de una cadena leida por teclado*/

#include "stdio.h"
#include "conio.c"

void main()
{
	char cad[30];
	int i;
	clrscr();
	printf("\nIntroduzca la cadena: ");
	gets(cad);

	for (i=0; cad[i]!=0; i++)
		if (( cad[i]>= 'A')&& (cad[i]<='Z'))
		cad [i]=cad[i]+32;

	printf ("\nLa cadena en min£sculas es: %s",cad);
	getch();
}