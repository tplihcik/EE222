#include <stdio.h>

int main();

int main(  )
{
   int number = 0 ;


   printf( "%d\n" , number ) ;

   while( number < 20 )
   {
      number++ ;

      printf( "%d " , number ) ;


      if( number == 2 || number == 5 || number == 9 || number == 14 || number == 20 )
      {
         printf( "\n" ) ;
      }


   }


}
