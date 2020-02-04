//Muestra el manejo de las funciones gets y puts y el
//manejo de punteros para cadenas.

#include <stdio.h>
#include <conio.c>
#include <stdlib.h>
#include <string.h>
void main()
   {
      char *p;
      int i;
      clrscr();
      puts("Introduce un texto:");  
      p=(char*)calloc(10, sizeof(char)); //calloc(10, 2)
      gets(p);
      puts("Imprimo con puts(), (que salta linea automaticamente):");
      puts(p);
      puts("Imprimo con un bucle, utilizando un puntero:");
      for(i=0; i<=strlen(p); i++)
	  printf("%c", *(p+i));
       puts("\nImprimo con un bucle, como array de caracteres:");
      for(i=0; i<=strlen(p); i++)
	  printf("%c", p[i]);
      free(p);
      getch();
}