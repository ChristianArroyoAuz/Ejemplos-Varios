#include <stdio.h>
#include <alloc.h>
#include <stdlib.h>
#include<conio.c>
#define MAXCOL 30

void main()
  {
    int nfila, ncol, f, c,(*a)[MAXCOL];
    clrscr();
    puts("Intro n§ de filas:");
    scanf("%d", &f);
    puts("ntro n§ de columnas:");
    scanf("%d", &c);
    puts("Llenamos el array:");
    for(nfila=0; nfila<f; nfila++)
       for(ncol=0; ncol<c; ncol++)
	  {
	    printf("(*(a+%d)+%d) = ", nfila, ncol);
	    scanf("%d", *(a+nfila)+ncol);

          }
    puts("Imprimimos el array:");
    for(nfila=0; nfila<f; nfila++)
      {
       for(ncol=0; ncol<c; ncol++)
	  printf("  %d",*(*(a+nfila)+ncol));
	  puts("");
      }
   getch();
  }