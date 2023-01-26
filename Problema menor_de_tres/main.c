#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a, b, c, menor;

 printf("valor A: ");
 scanf ("%d", &a);
 printf("valor B: ");
 scanf ("%d", &b);
 printf("valor C: ");
 scanf ("%d", &c);

 if (a < b && a < c) {

    menor = a;
 }
 else if ( b < c) {

    menor = b;
 }
 else{

   menor = c;

 }

 printf(" Menor = %d", menor);


 return 0;
}
