#include <stdio.h>
#include <conio.c>
void main()
  {
    char carac='A', *r;
    int a=12,b=45;
    int *p, *q;
    clrscr();
    printf("Direcci¢n de a=%p\n", &a);
    printf("Direcci¢n de b=%p\n", &b);
    printf("a = %d  b = %d\n", a, b);
    printf("Direcci¢n de caract = %p\n", &carac);
    printf("carac = %c\n", carac);
    printf("Valor ASCII de carac = %d\n", carac);
    printf("Direcci¢n de p = %p\n", &p);
    printf("Direcci¢n de q = %p\n", &q);
    printf("Direcci¢n de r = %p\n", &r);

    p = &a;
    q = &b;
    r = &carac;
    printf("El puntero  p  apunta a la direcci¢n: %p\n", p);
    printf("Y su contenido es: %d\n", *p);

    printf("El puntero  q  apunta a la direcci¢n: %p\n", q);
    printf("Y su contenido es: %d\n", *q);

    printf("El puntero  r  apunta a la direcci¢n: %p\n", r);
    printf("Y el contenido de *r es: %d\n", *r);
    printf("Como caracter ASCII *r contiene: %c\n", *r);
    getch();
}