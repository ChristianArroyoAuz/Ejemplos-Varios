#include <stdio.h>
#include <conio.c>
//int res;   //GLOBAL: visible en main() y en funci¢n suma()
void main()
  {
    //int res;
     int suma(int t,int s), a, b;
     clrscr();
     puts("\nValor de a: ");
     scanf("%d", &a);
     puts("\nValor de b: ");
     scanf("%d", &b);
   /*  res=suma(a, b);
     printf("resultado= %d",res);*/  //Estas dos lineas sustituyen a la siguiente
     printf("\nResultado imprimido desde main() = %d",suma(a,b));
     getch();  getch();
  }
int suma(int a, int b)
   {
     int res;
     res=a+b;
     printf("\nImprimimos la suma desde la funci¢n: %d\n", res);
     return(res);
   }