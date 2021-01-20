// Quicktutorial von C - Bernardinho.Codes
/* int = %d
   double = f%
   float = f%
   char = c%
   --------------------------
   int a = 3
   int b = 4
   printf("a ist %d", a(+/-/%/*)b) is possible

*/


#include <stdio.h>

#define PI 3.14 //Constante in C

int main() {
    
    int a = 2;
    int b = 1;

    if(a == 0) {
        printf("a ist 0 \n");
    }
    else if (b == 0) {
        printf("b ist 0\n");
    }  
    else {
        printf("b ist nicht 0 und b ist nicht 1\n");
    }   



    /*int zahl1 = 12;
    int zahl2 = 14;
    float zahl3 = 234.56;
    int ergebnis = zahl1 + zahl2;
    float ergebnis1 = zahl1 + zahl3; 

    printf("Das Ergebnis lautet %d \n", ergebnis);
    printf("Das zweite Ergebnis lautet %f \n", ergebnis1);
    */
    return 0;
}
 