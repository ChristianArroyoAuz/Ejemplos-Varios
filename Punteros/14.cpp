#include <stdio.h>
#include <conio.c>

int mat[] = {2, 16, -4, 29, 234, 12, 0, 3}, i=0;
void main()
   {
     clrscr();
     puts("Imprimimos las direcciones de memoria y valores contenidos:");
     puts("\nDireccci¢n de memoria &mat[i] \t\tContenido mat[i]");
     for(;i<8; i++)
	printf("\n\t&mat[%d] = %p  \t\t   mat[%d] = %d", i,&mat[i], i, mat[i]);
     getch();
     printf("\n\nRepetimos los resultados empleando notaci¢n de punteros:\n");
     getch();
     puts("\nDireccci¢n de memoria mat+i \t\tContenido *(mat+i)");
     for(i=0;i<8; i++)
	printf("\n\tmat+%d = %p  \t\t\t   *(mat+%d) = %d", i, mat+i, i, *(mat+i));
     getch();
     }