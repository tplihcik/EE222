/*
EE222 HW1
Developed By Tyler Plihcik on 1/18/2020
*/


//headers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   //init vars
   int years = 0 ;
   int seconds ;
   int exponent ;
   int multiplier ;


   //prompt user for years
   printf( "\nHow many years old are you?\n " ) ;
   scanf( "%d" , &years ) ;



   //calculate multiplier to get years to seconds
   exponent = pow( 10 , 7 ) ;
   multiplier = 3.156 * exponent ;

   //multiply years by multiplier above

   seconds = years * multiplier ;

   //print out result
   printf( "You are %d seconds old.\n\n" , seconds ) ;

}
