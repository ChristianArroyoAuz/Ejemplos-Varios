//Programa que pide una cadena, se la pasa como argumento a una
//funcion. La funcion pide una nueva cadena, la concatena a la anterior
//y devuelve el resultado de la concatenaci¢n (empleo de strcat() de string.h)
//Como returcad.cpp pero con notación de punteros y reserva dinámica de memoria
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.c>
//char func(char cadena[]);
char *func(char *cadena);
void main(void)
    {
       char *cadena;
       cadena = (char*)calloc(sizeof(char), 80);
       clrscr();
       printf("Introduce una cadena de caracteres:\n");
       gets(cadena);
       func(cadena); //llamada a la funcion, pasando la cadena como argumento
       printf("\nLa nueva cadena, devuelta por la funcion es:\n\n");
       printf("%s", cadena);
       getch();
    }
char *func(char *cadena)
    {
       char *cadena2;
       cadena2 = (char*)calloc(sizeof(char), 20);
       printf("\n\nIntroduce la cadena a concatenar:\n\n");
       gets(cadena2);
       strcat(cadena, cadena2);
       return(cadena);
    }