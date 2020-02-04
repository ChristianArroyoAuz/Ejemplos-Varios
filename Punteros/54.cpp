//Programa que pide una cadena, se la pasa como argumento a una
//funcion. La funci¢n pide una nueva cadena, la concatena a la anterior
//y devuelve el resultado de la concatenacion (empleo de strcat() de string.h)

#include <stdio.h>
#include <string.h>
#include <conio.c>
char func(char kadena7[]);
void main(void)
    {
       char cadena[80];
       clrscr();
       printf("Introduce una cadena de caracteres:\n");
       gets(cadena);
       func(cadena); //llamada a la funcion, pasando la cadena como argumento
       printf("\nLa nueva cadena, devuelta por la funcion es:\n\n");
       printf("%s", cadena);
       getch();
    }
char func(char *cadena)
    {
       char cadena2[20];
       printf("\n\nIntroduce la cadena a concatenar:\n\n");
       gets(cadena2);
       strcat(cadena, cadena2);

       return(cadena[80]);
       //Esta £ltima l¡nea puede modificarse utilizando notaci¢n de punteros:
       // return(*cadena);
    }