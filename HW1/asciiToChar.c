/*
EE222 HW1
Developed By Tyler Plihcik on 1/18/2020
*/


//headers
#include <stdio.h>
#include <stdlib.h>

/*
asciiToChar, user enters an ascii value and the program returns the char it
corresponds to
*/

int main()
{
   //init vars
   int value ;

   //prompt user
   printf( "\nPlease enter an ASCII value: \n" ) ;
   scanf( "%d" , &value ) ;

   //print result
   printf( "\nThe character associated with %d is : %c\n" , value , value ) ;


   return 0 ; 



}
