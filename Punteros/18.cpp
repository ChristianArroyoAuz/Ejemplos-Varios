//reserva dinamica de memoria: malloc(). Liberación de memoria: free()

#include "stdio.h"
#include "conio.c"
#include "stdlib.h"
void main()
{
	int *pa =NULL;
	unsigned int nbytes =100 *sizeof(int);
	clrscr();

	if ((pa= (int*) malloc(nbytes))==NULL)
	{
		printf ("Insuficiente espacio de memoria \n");
		exit(-1);
	}
	printf("Se ha asignado %u bytes de memoria \n", nbytes);
	free(pa);
	getch();
}