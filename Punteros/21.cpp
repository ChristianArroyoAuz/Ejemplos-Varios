/* Lectura y paso a minusculas de una cadena leida por tclado***********/

#include "stdio.h"
#include "conio.c"

void main()
{
	char *cad;
	int i;
	clrscr();
    cad = (char *)calloc(30, sizeof(char));
	printf("\nIntroduzca la cadena: ");
	gets(cad);

	i=0;
	do
	{
		if ((*(cad+i)>= 'A')&& (*(cad+i)<='Z'))
		*(cad+i) = *(cad+i)+32;
		i++;
	}
	while (*(cad+i)!=0);
	printf ("\nLa cadena en minusculas es: %s",cad);
	getch();
}