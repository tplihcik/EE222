/*
EE222 HW1
Developed By Tyler Plihcik on 1/18/2020
*/


//headers
#include <stdio.h>
#include <stdlib.h>

int main()
{
   //init vars
   float value ;

   printf( "\nPlease enter a floating point value: \n" ) ;
   scanf( "%f" , &value ) ;

   printf( "\n%f in decimal notation is: %f\n\n" , value , value ) ;
   printf( "\n%f in exponential notation is: %e\n" , value , value ) ;

   return 0 ;
}
