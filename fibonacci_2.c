#include<stdio.h>

int fibonacci_zahlen(int);

int main()
{
   int count;
   int c = 0;
 
   printf("Bitte gebe die Fibonacci-Zahl, die due berechnen moechtest: ");
   scanf("%d",&count);
   
   if (count < 0) {
       printf("Bitte geben Sie eine positive Zahl ein!");
   }
   
   else {
        
        for ( int i = 1 ; i <= count ; i++ )
       {
       fibonacci_zahlen(c);
       c++; 
       }
     printf("Das Ergebnis lautet: %d\n",fibonacci_zahlen(c));
   return 0;
  }
}

int fibonacci_zahlen(int number)
 {
   if ( number == 0 )
     return 0;
   else if ( number == 1 )
     return 1;
   else
     return ( fibonacci_zahlen(number - 1) + fibonacci_zahlen(number - 2) );
 }
