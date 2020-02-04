#include <stdio.h>
#include <conio.h>
int main()
 {
   unsigned int r, *p1, **p2, ***p3, ****p4;
   r = 58;
   p1 = &r; 
   p2 = &p1;
   p3 = &p2;
   p4 = &p3;
   printf("CONTENIDOS:\n");
   printf("r = %u\n", r);
   printf("*p1 = %u\n", *p1);
   printf("**p2 = %u\n", **p2);
   printf("***p3 = %u\n", ***p3);
   printf("****p4 = %u\n", ****p4);
   printf("\nDIRECCIONES:\n");
   printf("&r = %u\n", &r);
   printf("p1 = %u\n", p1);
   printf("&p1 = %u\n", &p1);
   printf("&p2 = %u\n", &p2);
   printf("*p2 = %u\n", *p2);
   printf("&p3 = %u\n", &p3);
   printf("*p3 = %u\n", *p3);
   printf("&p4 = %u\n", &p4);
   printf("*p4 = %u\n", *p4);
   printf("**p4 = %u\n", **p4);
   printf("***p4 = %u\n", ***p4);
   printf("****p4 = %u\n", ****p4);
   getch();
   return 1;
 }