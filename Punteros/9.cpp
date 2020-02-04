#include <conio.c>
#include <stdio.h>
void main()
  {
    int dia, mn, anyo;
    static char *mes[] = {"Mes incorrecto",
			  "Enero", "Febrero", "Marzo", "Abril",
			  "Mayo", "Junio", "Julio", "Agosto",
			  "Septiembre", "Octubre", "Noviembre"
			  "Diciembre"};
    clrscr();
    printf("Intro su fecha de nacimiento (dd/mm/aa) (con - ):\n");
    scanf("%d-%d-%d", &dia, &mn, &anyo);
    (mn>0&&mn<=12)?printf("\nNacido el %d de %s de 19%d", dia, mes[mn], anyo):\
    printf("\nEl mes no es v lido.");
    getch();
  }