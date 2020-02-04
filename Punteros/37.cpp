#include <conio.c>
#include <stdio.h>
void main()
   {
     int mat[] = {1,2,3,4},  *pmat, i;
     clrscr();
      printf("\Empleamos notacion decimal\n");
     printf("Hacemos que el puntero señale al primer elemento del array: pmat = mat");

     pmat = mat;
     //pmat=&mat[0];   //ES LO MISMO QUE pmat =mat
     printf("\nComprobamos los valores: ");
     printf("\nDirecci¢n de inicio del array: mat = %u", &mat[0]);
     getch();
     printf("\nDirecci¢n a que apunta pmat = %u", pmat);
     getch();
     printf("\nImprimimos las direcciones de memoria y sus contenidos:\n");
     for(i=0; i<4; i++)
     {
	printf("\n&mat[%u] = %u    (pmat+%u) = %u ", i, &mat[i], i, (pmat+i));
	printf("    mat[%u] = %u    *(pat+%u) = %u" , i, mat[i], i, *(pmat+i));
     }
     getch();   getch();
}