//Programa que LLENA UN ARRRAY Y SE REFIERE A EL COMO UN PUNTERO A
//UN GRUPO DE ARRRAYS CONTIGUOS

#include <stdio.h>
#include <conio.c>
void main()
  {
    int x[2][3], fil, col;
    clrscr();
    puts("Llenamos el array");
    for(fil=0; fil<2; fil++)
       for(col=0; col<3; col++)
	 {
	   printf("x[%d][%d] = ", fil, col);
	   scanf("%d", &x[fil][col]);
	 }
    printf("\nImprimimos usando un puntero a un grupo de arrays:\n");
    printf("\nPRIMERA FILA:\n");
    for(col=0; col<3; col++)
       printf(" %d", (*x)[col]);
    printf("\nSEGUNDA FILA:\n");
    for(col=0; col<3; col++)
       printf(" %d", (*(x+1))[col]);
    getch(); getch();
  }