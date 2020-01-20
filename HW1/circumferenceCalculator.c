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
   // init vars
   int diameter ;
   const double PI = 3.14 ;
   double circumference ;

   //prompt user for diameter
   printf( "\nPlease enter the diameter of a circle. " ) ;
   scanf( "%d" , &diameter ) ;

   // calc circumference
   circumference = ( double )diameter * PI ;

   //print result
   printf( "A circle with diameter %d has a circumference of %f\n" , diameter ,
                                                               circumference ) ;


   return 0 ;
}
