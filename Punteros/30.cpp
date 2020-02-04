/****************** Array de dos dimensiones ******************/

#include <stdio.h>
#include <conio.c>
#define F 4  // n£mero de filas
#define C 5  // n£mero de columnas

void main()
{
  static int tabla[][C] = { { 10, 12, 15, 17, 14 },
			     { 22, 20, 23, 25, 21 },
			     { 38, 30, 34, 36, 35 },
			     { 45, 41, 44, 48, 49 } };
  const int k = 10;
  int f, c;
  clrscr();

  // Multiplicamos cada elemento por una constante k, de valor 10
  for (f = 0; f < F; f++)
    for (c = 0; c < C; c++)
      tabla[f][c] *= k;

  //* Escribimos  el array
  for (f = 0; f < F; f++)
  {
    for (c = 0; c < C; c++)
      printf("%5d", tabla[f][c]);
    putchar('\n');
  }
  getch();
}