//Declara una variable x tipo float, un puntero *pa a dato flotante
//y un puntero a puntero a dato flotante **pa. Imprime valores y direc.
//de mem.. con el puntero a puntero (**pb) apuntamos al puntero (*pa) a
//ojeto float.

#include <stdio.h>
#include <conio.c>
void main()
   {
      float x= 7.4, **pa, *pb;
      clrscr();
      pb = &x;
      printf("x = %g  *pb = %g ", x, *pb);
      pa =&pb;
      printf("\nDirecciones:  &x: %x,  &pb:  %x,  &pa: %x", &x, &pb, &pa);
      printf("\nContenidos: x: %g,  *pb:  %g,  pa: %x (es la direcc. de pb)", x, *pb, pa);
      printf("\nPunteros: *pb = %g,  *pa = %x (direcci¢n de x),  **pa = %g (contenido de x);", *pb, *pa, **pa);
    getch();
   }