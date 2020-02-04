/* Empleo formato hexadecimal para las direcciones de mem. */

#include <stdio.h>
#include <conio.c>

int main (void)
{
     int valor[] = {2, 4, 9, 6,5, 33, -2317}, *p, *aux;
     //apuntamos:
     p = valor; //p = valor[0];
     
     p=valor;  //p guarda la d. de mem de valor[0]; equivale a p = &valor[0];
     printf("1) %#x\n", p); //imprime &valor[0], es decir p 
     printf("2) %d\n", *p); //imprime p[0], es decir 2 
     printf("3) %#x\n", p++); //imprime d.m. de &valor[0] y después avanza el puntero (POSTINCREMENTO)  
     printf("4) %d\n", (*p)+(*p+3));//*p ya es p[1], es decir 4, luego imprime 4+7, es  decir 11 
     printf("5) %d\n", (*p)+13);// 17 
     printf("6) %#x\n",  p); //d. de mem. de valor[1] 
     printf("7) %d\n",  *p); // 4
    // printf("8) %d\n", (**p)+1);  //ERROR
     p++; p++; //avanzamos en mem. dos saltos de sizeof(int): apuntamos al valor[3], es decir 6
     printf("9) %d\n", *p); 
     aux = p; //guardo  el  valor actual de p
     printf("10) %d\n", (++(++aux))-(p)); // doble preincremento. Resultado 2, difernecia entre las d.m
     printf("11) %#x\n" , p++); //imprime d.m. (direcc de mem) 
     printf("12) %d + %d = %d\n", (*p), (*p+3), (*p)+(*p+3));
     printf("13) %d" , *((++(++p))));
     getch();
     return 0;
}
