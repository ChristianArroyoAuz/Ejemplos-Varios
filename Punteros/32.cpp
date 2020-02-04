#include <stdio.h>
void main(void)
   {
      float med, suma = 0;
      int tab[10], j;
      int *pt = tab;
      for(j=0; j<10; j++)
	{
	  printf("\nIntroducir el elemento %d: ", j+1);
	  scanf("%d", pt+j);
	}
      for(j=0; j<10; j++)
	  suma = suma + *(pt+j);
	  med = suma/10;
	  printf("La media vale: %0.2f", med);
   }