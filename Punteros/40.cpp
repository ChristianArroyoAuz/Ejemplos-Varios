#include <stdio.h>
#include <conio.c>
void main()
   {
      char *cad[] = {"Esto es una cadena", "Y esto, otra"}, **p;
      int i=0;
      clrscr();
      p=&cad[0];
      do
	{
	  puts(*(p+i));
          getch();
	  i++;
	}while(**(p+i)!='\0'); //Tambien vale '\0' o 0
      getch();
   }