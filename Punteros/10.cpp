//Declara una cadena y un puntero a caracter. El puntero se inicializa con
//la dirección de la cadena e incrementando la dirección apuntada por el
//puntero, hasta encontrar el 0 de final de cadena, imprime la cadena

#include <stdio.h>
#include <conio.c>
void main()
 {
  char cad[30] ={"Esto es una cadena  "},  *p;

  clrscr();
  p=cad; //o p=&cad[0];
  do
	{
	  printf("%c", *(p++));

	}while(*p);  //o bien *p!=0 o *p!='\0'
    getch();
  }