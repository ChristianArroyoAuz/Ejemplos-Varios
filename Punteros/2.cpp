#include <stdio.h>
#include <stdlib.h>
#include <conio.c>

void main()
{
  int *pa = NULL;
  int nbytes = 0, Ok = 0, n = 0, i = 0;
  clrscr();
  do
  {
    printf("N£mero de elementos del array: ");
    scanf("%d", &n);
    Ok = n;
  }
  while(Ok==0);  //"mientras Ok sea  0"
    nbytes = n*sizeof(int);
    if ((pa = (int *)malloc(nbytes))== NULL) //asignacion de memoria y comprobaci¢n de valor devuelto por malloc
      {
	printf("Insuficiente espacio de memoria\n");
	exit(-1);
      }
     printf("Se han asignado %u bytes de memoria\n", nbytes);

  // Inicializo el array a cero 
  for ( i = 0; i < n; i++ )
    pa[i] = 0;

  // Aqui realizaria las operaciones....

  free(pa);    //libero la memoria reservada por malloc()
  getch();
}