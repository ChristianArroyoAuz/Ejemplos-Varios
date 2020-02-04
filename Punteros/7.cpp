#include <stdio.h>
#include <conio.c>
void main()
  {
     char cadenas[3][20] = {
			     {"Cadena uno"},
			     {"Segunda cadena"},
			     {"Ultima cadena"},
			   };
    int i=0;
    clrscr();
    printf("1.- ");
    puts(cadenas[0]);
     printf("2.- ");
    puts(cadenas[1]);
     printf("3.- ");
    puts(cadenas[2]);
     printf("4.- ");
    puts((*cadenas));
     printf("5.- ");
    puts(*(cadenas+1));
     printf("6.- ");
     puts(*(cadenas+2));
      printf("7.- ");
     do
      {
       printf("%c", (*cadenas)[i]);
      }while((*cadenas)[i++]);
       printf("\n8.- ");
getch();
}