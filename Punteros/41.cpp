/* Escribir los valores de un array. Version con punteros */

#include <stdio.h>
 
void main() 
{ 
  static int lista[] = {24, 30, 15, 45, 34}; 
  int ind; 
  int *plista = lista;
   
  for (ind = 0; ind < 5; ind++) 
    printf("%d  ", *plista++); 
}