/*
Write a program that asks user an arithmetic operator(+,-,* or /)
and two operands and perform the corresponding calculation on the operands.
*/

#include <stdio.h>

int main();


int main(  )
{
   char operator ;

   double operandOne ;

   double operandTwo ;

   double result = 0 ;

   const char MULTIPLY = '*' ;
   const char DIVIDE = '/' ;
   const char ADD = '+' ;
   const char SUBTRACT = '-' ;


   printf( "Enter an operator (+, -, * , /):\n " ) ;
   scanf( "%c" , &operator ) ;

   printf( "Enter a number:\n " ) ;
   scanf( "%lf" , &operandOne ) ;

   printf( "Enter another number:\n " ) ;
   scanf( "%lf" , &operandTwo ) ;


   switch( operator )
   {
      case MULTIPLY:
         result = operandOne * operandTwo ;
      break ;

      case DIVIDE:
         result = operandOne / operandTwo ;
      break ;

      case ADD:
         result = operandOne + operandTwo ;
      break ;

      case SUBTRACT:
         result = operandOne - operandTwo ;
      break ;

   }

   printf(  "The result of %lf %c %lf is:  %lf" , operandOne , operator , operandTwo , result ) ;
}
