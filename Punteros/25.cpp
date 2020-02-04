//pide una cadena y un caracter para ser eliminado de la cadena.
#include <stdio.h>
#include <stdlib.h>
#include <conio.c>

void main(void)
  {
      char *cadena, letra;
      int i;
      cadena = (char *)malloc(sizeof(char)*100); //meme para 99 caracteres mas '\0'
      if(cadena == NULL)
         {
           puts("Error en la asignación de memoria");
           exit (0);
         }
      puts("Intro frase:\n");
      gets(cadena);
      fflush(stdin);
      puts("¿Qué caracter desea eliminar? ");
      scanf("%c", &letra);
      fflush(stdin);
      for(i=0; i<=strlen(cadena); i++)
         {
           if(letra == *(cadena + i))
             *(cadena+i) = 0X20;
          }
      puts(cadena);
      getch();
      system("PAUSE>NULL");
      return 0;
  }