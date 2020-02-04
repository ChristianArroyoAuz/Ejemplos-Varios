/* Escribir los valores de un array. Version con puntero a array */

#include <stdio.h>
#include <conio.c>

void main()
{
  static int lista[] = {24, 30, 15, 45, 34};
  int ind;
  int *plista = &lista[0];

  for (ind = 0; ind < 5; ind++)
    printf("%d  ", *(plista+ind));
    getch();
}