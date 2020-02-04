/********************* Función realloc *********************/
/* realloc.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>

void main() 
{ 
  const int BYTES = 40;
  char *p; 
 
  /* Asignar espacio para una cadena de caracteres */
  p = ( char *)malloc(BYTES * sizeof(char));

  /* Copiar una cadena de caracteres en el espacio asignado */
  strcpy(p, "abcdef");
 
  /* Reasignar el bloque para pueda contener más caracteres */
  if (p != NULL) 
    p = (char *)realloc(p, BYTES * 2 * sizeof(char)); 
 
  if (p != NULL) 
  { 
    printf("Bloque reasignado\n");
    /* Escribir la cadena original */
    printf("%s\n", p);
    /* Liberar el espacio de memoria */
    free(p); 
    printf("\nEl bloque ha sido liberado\n");
  } 
  else 
  { 
    printf("La reasignación no ha sido posible\n");
    printf("El espacio ocupado por el bloque ha sido liberado");
  }
   getch();
}