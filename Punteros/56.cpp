//Programa que suma un valor a una variable a traves de un puntero
#include <stdio.h>
#include <conio.h>
void main()
  {
    int a, *p;
    a=5;
    p=&a;
    *p+=7;  //*p=*p+7
    printf("\nEl valor final de a es: %d", a);
  }