#include <stdio.h>
#include <conio.c>

void main()
  {
     int suma(int *a,int *b), a, b;//, res;
     clrscr();
     puts("\nValor de a:");
     scanf("%d", &a);
     puts("\nValor de b:");
     scanf("%d", &b);
   /*  res=suma(a, b);
     printf("resultado= %d",res);*/  //Estas dos l¡nea sustituyen a la siguiente
     printf("resultado imprimido desde main() = %d",suma(&a,&b));
     getch();   getch();
  }
int suma(int *este, int *aquel)
   {
     int res;
     res=*este+*aquel;
     printf("\nImprimimos la suma desde la funci¢n: %d\n", res);
     return(res);
   }