#include <conio.c>
#include <stdio.h>
void main()
   {
     static float x[2];
     float  *p, *q;
     clrscr();
     printf("\nIntro valor x[0] =  ");
     scanf("%f", &x[0]);
     printf("\nIntro valor x[1] =  ");
     scanf("%g", &x[1]);
     p=&x[0];
     q=p;
     printf("\nContenido de x[0] = %g", x[0]);
     printf("\nDirrecci�n de x[0], mediante puntero: %#X", p);
     printf("\nContnido de la direcci�n apuntada: %g", *p);
    // printf("\n%u",++p);
     printf("\nTama�o del dato puntero: %u", sizeof(p));            // ++(*(++p))  ++(*p) (*p++)
     printf("\nCon el otro puntero, elememto x[1] =  %g",*(++q));          // (++(*(++p)))   ++*(++p)


     getch(); getch();
   }