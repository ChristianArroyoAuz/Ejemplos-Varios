/*Programa que utiliza una tabla de punteros para
relacionar nombres de clientes con sus direcciones. Permite introducir
un nombre y visualiza el domicilio correspondiente.*/
#include<stdio.h>
#include<string.h>
#include <conio.c>
char *punt[][2] = { "Vanesa Yesta",  "C/. Doctor Cito, 28 ",
		    "Renato Mate", "C/ Huertas, 23, 5§C",
		    "Ester Tor Cida", "Calle Quebrada, 8, 9§B"
		  };
	     void main(void)
	     {
		int j, sw=0;
		char nom[40];
		clrscr();
		printf("\nIntroducir nombre del cliente: \n");
		gets(nom);
		for(j=0; j<3; j++)
		{

		   if(!strcmp(nom, punt[j][0]))
		     {
			printf("%s tiene como domicilio: %s" , nom,punt[j][1]);
			sw=1;
		     }
		}
		   if(sw==0)
		   printf("\n Cliente no encontrado");
		getch();
	      }