//Declara una funci¢n a la que le pasa dos argumentos enteros
//por referencia, imprimiendo sus valores en la propia función (incrementa
//el primero de ellos en 10 unidades.

#include <stdio.h>
#include <conio.c>
void main()
  {
     int a = 7, b = 5;
     void fun(int *p, int *q);
     clrscr();
     fun(&a, &b);    //llamada a la funci¢n
     printf("\nEn main() a = %d y b= %d", a, b);
     getch();
  }   //FIN DE main()
void fun(int *x, int *y)
  {
     printf("En la función:  %d , %d", *x+10, *y);
  }