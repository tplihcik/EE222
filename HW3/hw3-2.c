//	Generate a table of conversions from radians to degrees.
// Start the radian column at 0.0,
//and increment by π/10 until the radian amount is 2π.
//Include a table heading and column headings for the tables.



#include <stdio.h>

int main() ;

int main(  )
{
   double pi = 3.14 ;
   double radians = 0.0 ;
   double degrees = 0 ;


   printf( "Degrees              Radians\n\n" );
   while( radians < ( 2 * pi ) )
   {
      radians += ( pi / 10 ) ;

      degrees = radians * ( 180 / pi ) ;


      printf("%f             %f\n" , degrees , radians) ;
   }
}
