//
//  main.c
//  EE222HW7
//  Function returns the number of positive, negative, and zero values
//  in a 6x5 array
//
//  Created by Tyler Plihcik on 4/2/20.
//  Copyright © 2020 Tyler Plihcik. All rights reserved.
//
//headers
#include <stdio.h>

//function prototypes
int positiveValueFinder( int array[6][5] ) ;
int negativeValueFinder( int array[6][5] ) ;
int zeroValueFinder( int array[6][5] ) ;


/*
 Funciton: Main
 Algorithm: Main driver function for HW7 Problem 8
 declares the 6x5 array of integers and calls the
 necessary functtions to calculate the number of
 positive, negative, and zero values in the array.
 Function also prints the array, and prints the results
 of the value finders
 
 */
int main(  )
{
    int innerIndex , outerIndex ;

    //create the array
    int array[ 6 ][ 5 ] = { {-5,-4,-3,-2,-1} , {0,1,2,3,4} , {5,6,7,8,9} , {10,11,12,13,14} , {15,16,17,18,19} , {20,21,22,23,24} } ;
    

    //call positive value finder
    //display results of value finder
    printf( "Positive Values: %d\n\n" , positiveValueFinder( array ) ) ;
    
    //call negative value finder
    printf( "Negative Values: %d\n\n" , negativeValueFinder( array ) ) ;
    
    //call zero value finder
    printf( "Zero Values: %d\n\n" , zeroValueFinder( array ) ) ;
    
    //display array
    printf( "Array: \n" ) ;
    for( outerIndex = 0 ; outerIndex < 6 ; outerIndex++ )
    {
        for( innerIndex = 0 ; innerIndex < 5 ; innerIndex++ )
        {
            printf( "%d\t" , array[ outerIndex ][ innerIndex ] ) ;
        }
        printf( "\n" ) ;
    }
    return 0 ; //temp stub return
}






/*
 Function: positiveValueFinder
 Algorithm: Iterates through a a 2-D array and
 returns the number of positive values in the array
 */
int positiveValueFinder( int array[6][5] )
{
    //init positive count var
    int positiveCount = 0 ;
    
    //vars for looping through array
    int innerIndex , outerIndex ;
    
    
    //iterate through the array
    for( outerIndex = 0 ; outerIndex < 6 ; outerIndex++ )
    {
        for( innerIndex = 0 ; innerIndex < 5 ; innerIndex++ )
        {
            if( array[ outerIndex ][ innerIndex ] > 0 )
            {
                positiveCount++ ;
            }
        }
    }
    
    return positiveCount ;
}


/*
 Function: negativeValueFinder
 Algorithm: Iterates through a a 2-D array and
 returns the number of negative values in the array
 */
int negativeValueFinder( int array[6][5] )
{
    //init negative count var
    
    //iterate through the array
    
    //compare current index with 0, if x < 0, count ++
    
    
    //init positive count var
       int negativeCount = 0 ;
       
       //vars for looping through array
       int innerIndex , outerIndex ;
       
       
       //iterate through the array
       for( outerIndex = 0 ; outerIndex < 6 ; outerIndex++ )
       {
           for( innerIndex = 0 ; innerIndex < 5 ; innerIndex++ )
           {
               if( array[ outerIndex ][ innerIndex ] < 0 )
               {
                   negativeCount++ ;
               }
           }
       }
       
       return negativeCount ;
    
    
}



/*
 Function: zeroValueFinder
 Algorithm: Iterates through a a 2-D array and
 returns the number of zero values in the array
 */
int zeroValueFinder( int array[6][5] )
{
    //init zero count var
    
    //iterate through the array
    
    //compare current index with 0, if x == 0, count ++
    //init positive count var
       int zeroCount = 0 ;
       
       //vars for looping through array
       int innerIndex , outerIndex ;
       
       
       //iterate through the array
       for( outerIndex = 0 ; outerIndex < 6 ; outerIndex++ )
       {
           for( innerIndex = 0 ; innerIndex < 5 ; innerIndex++ )
           {
               if( array[ outerIndex ][ innerIndex ] == 0 )
               {
                   zeroCount++ ;
               }
           }
       }
       
       return zeroCount ;
    
    
    
}
