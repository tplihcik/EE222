//
//  HW4_Pt2.c
//  EE222HW4
//
//  Created by Tyler Plihcik on 2/20/20.
//  Copyright © 2020 Tyler Plihcik. All rights reserved.
//

#include <stdio.h>


//funciton prototypes
double addition( int numOne , int numTwo ) ;

double subtraction( int numOne , int numTwo ) ;

double multiplication( int numOne , int numTwo ) ;

double division( int numOne , int numTwo ) ;





int main(  )
{

    //constants for switch statement
    const char ADD  = '+' ;
    const char MULTIPLY = '*' ;
    const char DIVIDE = '/' ;
    const char SUBTRACT =  '-' ;






    //declare variables
    char opperand ;

    int numOne ;
    int numTwo ;

    double result = 0 ;

    printf( "Enter the first number: \n" ) ;
    scanf( "%d" , &numOne ) ;

    printf( "Enter the second number: \n" ) ;
    scanf( "%d" , &numTwo ) ;

    printf( "Enter an operator: \n" ) ;
    scanf( "%c" , &opperand ) ;

    switch( opperand )
    {
        case ADD:
            result = addition( numOne , numTwo ) ;
        break ;

        case SUBTRACT:
            result = subtraction( numOne , numTwo ) ;
        break ;

        case MULTIPLY:
            result = multiplication( numOne , numTwo ) ;
        break ;

        case DIVIDE:
            result = division( numOne , numTwo ) ;
        break ;
    }

    printf( "The result of %d %c %d is: %f\n\n" , numOne , opperand , numTwo , result ) ;
}




/*
 Function: addition
 Algorithm: takes in two integers as parameters and adds them
 */
double addition( int numOne , int numTwo )
{


    return numOne + numTwo ;
}


/*
Function: subtraction
Algorithm: takes in two integers as parameters and subtracts them
*/
double subtraction( int numOne , int numTwo )
{
    return numOne - numTwo ;
}


/*
Function: multiplication
Algorithm: takes in two integers as parameters and mulitplies them
*/
double multiplication( int numOne , int numTwo )
{
    return numOne * numTwo ;
}


/*
Function: division
Algorithm: takes in two integers as parameters and divides them

*/
double division( int numOne , int numTwo )
{
    return numOne / numTwo ;
}
