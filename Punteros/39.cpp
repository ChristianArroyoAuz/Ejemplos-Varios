//declara puntero void que luego transforma mediante casting a otro tipo de valor
#include <conio.c>
#include <stdio.h>
void main()
  {
    void *generico;
    int *puntint, x=3;
    char *puntchar = "þþPuntero puntchar a caracteresþþ";
    puntint=&x;
    clrscr();
    printf("El valor apuntado por puntint es %d (valor de x)\n", *puntint);
    generico=puntchar;
    printf("\n\ngenerico (tipo void) apunta a objeto char:  %s", generico); //incluso (int *)generico; CAST
    printf("\n\nImprimo ahora gen‚rico como char:\n\n");
    puts((char *)generico); //nuevo cast
    getch();
   }