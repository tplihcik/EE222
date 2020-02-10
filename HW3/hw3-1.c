#include <stdio.h>

int main() ;

int main(  )
{
   //init vars
   // int buffer = 10000000 ;

   char character ;

   int numOfSpaces = 0 ;

   int numOfNewLines = 0 ;

   int numOfOtherChars = 0 ;

   printf( "Enter your characters: " ) ;

   while( ( character = getchar() ) != '#' )
   {
         if( character == ' ' )
         {
            numOfSpaces++ ;
         }

         else if( character == '\n' )
         {
            numOfNewLines++ ;
         }

         else
         {
            numOfOtherChars++ ;
         }
   }


   printf( "You typed %d spaces\n " , numOfSpaces ) ;
   printf( "You typed %d new lines\n " , numOfNewLines ) ;
   printf( "You typed %d other characters\n " , numOfOtherChars ) ;
}
