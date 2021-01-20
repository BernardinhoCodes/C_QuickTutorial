// Quicktutorial von C - Bernardinho.Codes
/* int = %d
   double = f%
   float = f%
   char = c%
   --------------------------
   int a = 3
   int b = 4
   printf("a ist %d", a(+/-/%/*)b) is possible
   -----------------------------
   a++, !=, 

*/

//switch-case: 

#include <stdio.h>

int main() {
    int a = 4;
    int b = -6;

    char note = 'B';
    switch(note) {
        case 'A':
                printf("Das ist cool");
                break;
        case 'B':
                printf("Das ist nice");
                break;
        case 'C':
                printf("Das ist wertvoll");
                break;
        case 'D':
                printf("Nee, das ist leider falsch");
                break;
        case 'F':
                printf("Leider auch nicht richtig");
                break;
        default:
             printf("Das ist keine Note");

    }
    return 0;
}    

