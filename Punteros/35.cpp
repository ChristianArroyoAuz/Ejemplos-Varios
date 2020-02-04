//Declara un puntero a cadena de carcteres y lo imprime caracter
//a caracter hasta que detecta, en el bucle do...while  el caracter nulo
//de final de cadena ('\0')
#include <stdio.h>
#include <conio.c>
void main()
  {
    char *nombre = "PEPE PEREZ";
    int i=0;
    clrscr();
    do
      printf("%c", *(nombre+i));
    while(*(nombre+i++)); //postincremento de i, para cambiar VCB
    puts(" ");  //imprime blanco ,m s salto de l¡nea.
    puts(nombre);
    getch();
  }