#include <stdio.h>
#include <conio.c>
#include <alloc.h>
#include <string.h>
void main() {
   char *cadena;
   int i;
   clrscr();
   puts("Introduce una cadena de caracteres\n");
   cadena=(char *)malloc(5*sizeof(int));
   fgets(cadena, 5, stdin);
   puts("\n");
   /*  puts(cadena);*/
   for(i=0; i<=strlen(cadena); i++)
     printf("%c", *(cadena+i));
   printf("\n\n\nHa imprimido 4 caracteres mas el caracter nulo: \\0");
     getch();
}