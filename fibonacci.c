// Fibonacci Zahlen


#include <stdio.h>

int main() {

    int count;
    int next_number;
    int number1 = 0;
    int number2 = 1;
    
    printf("Bitte gebe die Fibonacci-Zahl ein die du berechnen moechtest: ");
    scanf("%d", &count);

    if(count < 0) {
        printf("Bitte geben Sie eine positive Zahl ein!");
    }
    else {
       for ( int i = 0; i <= count; i++)
       {
           if (i <= 1)
           {
               next_number = i;
           }
           else
           {
              next_number = number1 + number2;
              number1 = number2;
              number2 = next_number;
           }
           
       }
       printf("Deine gesuchtes Ergebnis deiner Fibonacci-Zahl lautet: %d\n", next_number);
    }


    return 0;
 } 