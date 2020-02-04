/* Imprime los valores de un vector*/
#include "stdio.h"
#include "conio.c"
void main()
{
	int nums[] = {92, 81, 70, 69, 58};
	int i;
	clrscr();
	for (i=0; i<5; i++)
		printf("%d\n", nums[i]);
	getch();

//Idem utilizando punteros
/*
#include "stdio.h"
#include "conio.h"
void main()
{
	int nums[] = {92, 81, 70, 69, 58};
	int i;
	clrscr();
	for (i=0; i<5; i++)
		printf ("\n%d ", *(nums+i));
	getch();*/

}